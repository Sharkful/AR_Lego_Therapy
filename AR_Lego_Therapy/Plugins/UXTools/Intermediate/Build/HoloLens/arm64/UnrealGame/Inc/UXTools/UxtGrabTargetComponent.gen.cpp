// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGrabTargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGrabTargetComponent() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtGrabPointerData;
class UScriptStruct* FUxtGrabPointerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtGrabPointerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtGrabPointerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtGrabPointerData, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtGrabPointerData"));
	}
	return Z_Registration_Info_UScriptStruct_UxtGrabPointerData.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtGrabPointerData>()
{
	return FUxtGrabPointerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NearPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabPointTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPointTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalGrabPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalGrabPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripToGrabPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripToGrabPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripToObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripToObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarRayHitPointInPointer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FarRayHitPointInPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Utility struct that stores transient data for a pointer which is interacting with a grabbable component.\n */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Utility struct that stores transient data for a pointer which is interacting with a grabbable component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtGrabPointerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_NearPointer_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/** The near pointer that is interacting with the component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "The near pointer that is interacting with the component." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_NearPointer = { "NearPointer", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, NearPointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_NearPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_NearPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarPointer_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/** The far pointer that is interacting with the component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "The far pointer that is interacting with the component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GrabPointTransform_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/** Last updated grab point transform. (Pointer transform in near pointer case, ray hit transform in far pointer case) */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Last updated grab point transform. (Pointer transform in near pointer case, ray hit transform in far pointer case)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GrabPointTransform = { "GrabPointTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, GrabPointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GrabPointTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GrabPointTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/** The time at which interaction started, in seconds since application start. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "The time at which interaction started, in seconds since application start." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_LocalGrabPoint_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/**\n\x09 * Transform of the pointer when it started interacting, in the local space of the target component.\n\x09 * This allows computing pointer offset in relation to the current actor transform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Transform of the pointer when it started interacting, in the local space of the target component.\nThis allows computing pointer offset in relation to the current actor transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_LocalGrabPoint = { "LocalGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, LocalGrabPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_LocalGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_LocalGrabPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToGrabPoint_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/**\n\x09 * Transform of the grab point in near pointer's grip local space at the start of the interaction.\n\x09 *\n\x09 * This is useful to prevent grab point's position changes after grab starts from altering object's transform (e.g.\n\x09 * animation of InputSim's hand).\n\x09 *\n\x09 * Far pointer doesn't need this because its grip transform is already at grab point.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Transform of the grab point in near pointer's grip local space at the start of the interaction.\n\nThis is useful to prevent grab point's position changes after grab starts from altering object's transform (e.g.\nanimation of InputSim's hand).\n\nFar pointer doesn't need this because its grip transform is already at grab point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToGrabPoint = { "GripToGrabPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, GripToGrabPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToGrabPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToGrabPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToObject_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/**\n\x09 * Transform of the object in pointer's grip local space at the start of the interaction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Transform of the object in pointer's grip local space at the start of the interaction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToObject = { "GripToObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, GripToObject), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarRayHitPointInPointer_MetaData[] = {
		{ "Category", "Uxt Grab Pointer Data" },
		{ "Comment", "/** Far pointer only property -> describes the relative transform of the grab point to the pointer transform (pointer origin /\n\x09 * orientation) This is needed to calculate the new grab point on the object on pointer translations / rotations */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Far pointer only property -> describes the relative transform of the grab point to the pointer transform (pointer origin /\norientation) This is needed to calculate the new grab point on the object on pointer translations / rotations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarRayHitPointInPointer = { "FarRayHitPointInPointer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtGrabPointerData, FarRayHitPointInPointer), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarRayHitPointInPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarRayHitPointInPointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_NearPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GrabPointTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_LocalGrabPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToGrabPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_GripToObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewProp_FarRayHitPointInPointer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtGrabPointerData",
		sizeof(FUxtGrabPointerData),
		alignof(FUxtGrabPointerData),
		Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtGrabPointerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtGrabPointerData.InnerSingleton, Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtGrabPointerData.InnerSingleton;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetGripTransform)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetGripTransform(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetPointerLocation)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetPointerLocation(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetPointerTransform)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetPointerTransform(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetRotationOffset)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetRotationOffset(Z_Param_Out_Transform,Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetLocationOffset)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetLocationOffset(Z_Param_Out_Transform,Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetGrabPointTransform)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetGrabPointTransform(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetTargetRotation)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetTargetRotation(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetTargetLocation)
	{
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetTargetLocation(Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetGrabTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetGrabTransform(Z_Param_Out_Transform,Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetGrabRotation)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetGrabRotation(Z_Param_Out_Transform,Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabPointerDataFunctionLibrary::execGetGrabLocation)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_GrabData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUxtGrabPointerDataFunctionLibrary::GetGrabLocation(Z_Param_Out_Transform,Z_Param_Out_GrabData);
		P_NATIVE_END;
	}
	void UUxtGrabPointerDataFunctionLibrary::StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary()
	{
		UClass* Class = UUxtGrabPointerDataFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabLocation", &UUxtGrabPointerDataFunctionLibrary::execGetGrabLocation },
			{ "GetGrabPointTransform", &UUxtGrabPointerDataFunctionLibrary::execGetGrabPointTransform },
			{ "GetGrabRotation", &UUxtGrabPointerDataFunctionLibrary::execGetGrabRotation },
			{ "GetGrabTransform", &UUxtGrabPointerDataFunctionLibrary::execGetGrabTransform },
			{ "GetGripTransform", &UUxtGrabPointerDataFunctionLibrary::execGetGripTransform },
			{ "GetLocationOffset", &UUxtGrabPointerDataFunctionLibrary::execGetLocationOffset },
			{ "GetPointerLocation", &UUxtGrabPointerDataFunctionLibrary::execGetPointerLocation },
			{ "GetPointerTransform", &UUxtGrabPointerDataFunctionLibrary::execGetPointerTransform },
			{ "GetRotationOffset", &UUxtGrabPointerDataFunctionLibrary::execGetRotationOffset },
			{ "GetTargetLocation", &UUxtGrabPointerDataFunctionLibrary::execGetTargetLocation },
			{ "GetTargetRotation", &UUxtGrabPointerDataFunctionLibrary::execGetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetGrabLocation_Parms
		{
			FTransform Transform;
			FUxtGrabPointerData GrabData;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabLocation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabLocation_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the grab point in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the grab point in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetGrabLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::UxtGrabPointerDataFunctionLibrary_eventGetGrabLocation_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetGrabPointTransform_Parms
		{
			FUxtGrabPointerData GrabData;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabPointTransform_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabPointTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the grab point transform in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the grab point transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetGrabPointTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::UxtGrabPointerDataFunctionLibrary_eventGetGrabPointTransform_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetGrabRotation_Parms
		{
			FTransform Transform;
			FUxtGrabPointerData GrabData;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabRotation_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabRotation_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the grab rotation in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the grab rotation in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetGrabRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::UxtGrabPointerDataFunctionLibrary_eventGetGrabRotation_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetGrabTransform_Parms
		{
			FTransform Transform;
			FUxtGrabPointerData GrabData;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabTransform_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGrabTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the grab transform in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the grab transform in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetGrabTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::UxtGrabPointerDataFunctionLibrary_eventGetGrabTransform_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetGripTransform_Parms
		{
			FUxtGrabPointerData GrabData;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGripTransform_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetGripTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/**\n\x09 * Returns the pointer's grip transform in world space.\n\x09 *\n\x09 * This represents a reference point in the pointer, which corresponds to the actual grip joint's transform\n\x09 * for the near pointer and the hit point's transform for the far pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns the pointer's grip transform in world space.\n\nThis represents a reference point in the pointer, which corresponds to the actual grip joint's transform\nfor the near pointer and the hit point's transform for the far pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetGripTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::UxtGrabPointerDataFunctionLibrary_eventGetGripTransform_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetLocationOffset_Parms
		{
			FTransform Transform;
			FUxtGrabPointerData GrabData;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetLocationOffset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetLocationOffset_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetLocationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the world space offset between pointer grab point and target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the world space offset between pointer grab point and target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetLocationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::UxtGrabPointerDataFunctionLibrary_eventGetLocationOffset_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetPointerLocation_Parms
		{
			FUxtGrabPointerData GrabData;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetPointerLocation_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetPointerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Returns the world space pointer location */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns the world space pointer location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetPointerLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::UxtGrabPointerDataFunctionLibrary_eventGetPointerLocation_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetPointerTransform_Parms
		{
			FUxtGrabPointerData GrabData;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetPointerTransform_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetPointerTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Returns the world space pointer transform (at pointer origin). */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns the world space pointer transform (at pointer origin)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetPointerTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::UxtGrabPointerDataFunctionLibrary_eventGetPointerTransform_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetRotationOffset_Parms
		{
			FTransform Transform;
			FUxtGrabPointerData GrabData;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetRotationOffset_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetRotationOffset_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetRotationOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the world space rotation between pointer grab point and target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the world space rotation between pointer grab point and target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetRotationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::UxtGrabPointerDataFunctionLibrary_eventGetRotationOffset_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetTargetLocation_Parms
		{
			FUxtGrabPointerData GrabData;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetTargetLocation_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the pointer target in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the pointer target in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetTargetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::UxtGrabPointerDataFunctionLibrary_eventGetTargetLocation_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics
	{
		struct UxtGrabPointerDataFunctionLibrary_eventGetTargetRotation_Parms
		{
			FUxtGrabPointerData GrabData;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_GrabData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_GrabData = { "GrabData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetTargetRotation_Parms, GrabData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_GrabData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_GrabData_MetaData)) }; // 1953156998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabPointerDataFunctionLibrary_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_GrabData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Grab Pointer Data" },
		{ "Comment", "/** Compute the target rotation in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the target rotation in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, nullptr, "GetTargetRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::UxtGrabPointerDataFunctionLibrary_eventGetTargetRotation_Parms), Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtGrabPointerDataFunctionLibrary);
	UClass* Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_NoRegister()
	{
		return UUxtGrabPointerDataFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabLocation, "GetGrabLocation" }, // 1936834827
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabPointTransform, "GetGrabPointTransform" }, // 3855483743
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabRotation, "GetGrabRotation" }, // 1867153705
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGrabTransform, "GetGrabTransform" }, // 2140775020
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetGripTransform, "GetGripTransform" }, // 1883647588
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetLocationOffset, "GetLocationOffset" }, // 741335610
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerLocation, "GetPointerLocation" }, // 3550555132
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetPointerTransform, "GetPointerTransform" }, // 1775422641
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetRotationOffset, "GetRotationOffset" }, // 1819621383
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetLocation, "GetTargetLocation" }, // 184257392
		{ &Z_Construct_UFunction_UUxtGrabPointerDataFunctionLibrary_GetTargetRotation, "GetTargetRotation" }, // 2102237666
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Utility functions for FGrabPointerData.\n */" },
		{ "IncludePath", "Interactions/UxtGrabTargetComponent.h" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Utility functions for FGrabPointerData." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtGrabPointerDataFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::ClassParams = {
		&UUxtGrabPointerDataFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUxtGrabPointerDataFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtGrabPointerDataFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtGrabPointerDataFunctionLibrary.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabPointerDataFunctionLibrary>()
	{
		return UUxtGrabPointerDataFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabPointerDataFunctionLibrary);
	struct Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtEnterFarFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEnterFarFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEnterFarFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a far focus enter events. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a far focus enter events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtEnterFarFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtEnterFarFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a far focus update event. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a far focus update event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUpdateFarFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUpdateFarFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtExitFarFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtExitFarFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtExitFarFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a far focus exit event. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a far focus exit event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtExitFarFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtExitFarFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a focus enter events. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a focus enter events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtEnterGrabFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a focus update event. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a focus update event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUpdateGrabFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtExitGrabFocusDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtExitGrabFocusDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtExitGrabFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a focus exit event. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a focus exit event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtExitGrabFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtExitGrabFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtBeginGrabDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBeginGrabDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBeginGrabDelegate_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a BeginGrab event. Grabbing pointer is added to the object before this is triggered. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a BeginGrab event. Grabbing pointer is added to the object before this is triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtBeginGrabDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtBeginGrabDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUpdateGrabDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateGrabDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateGrabDelegate_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a UpdateGrab event. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a UpdateGrab event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUpdateGrabDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUpdateGrabDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtEndGrabDelegate_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEndGrabDelegate_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtEndGrabDelegate_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for handling a EndGrab event. Grabbing pointer is removed from the object before this is triggered. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Delegate for handling a EndGrab event. Grabbing pointer is removed from the object before this is triggered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtEndGrabDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtEndGrabDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetGrabPointers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUxtGrabPointerData>*)Z_Param__Result=P_THIS->GetGrabPointers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execSetTickOnlyWhileGrabbed)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickOnlyWhileGrabbed(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetTickOnlyWhileGrabbed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTickOnlyWhileGrabbed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetTargetCentroid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTargetCentroid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetGrabPointCentroid)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ToWorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetGrabPointCentroid(Z_Param_Out_ToWorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execForceEndGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ForceEndGrab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetSecondaryGrabPointer)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_PointerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSecondaryGrabPointer(Z_Param_Out_Valid,Z_Param_Out_PointerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execGetPrimaryGrabPointer)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_PointerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPrimaryGrabPointer(Z_Param_Out_Valid,Z_Param_Out_PointerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGrabTargetComponent::execFindGrabPointer)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_NearPointer);
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FUxtGrabPointerData,Z_Param_Out_PointerData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindGrabPointer(Z_Param_NearPointer,Z_Param_FarPointer,Z_Param_Out_Success,Z_Param_Out_PointerData,Z_Param_Out_Index);
		P_NATIVE_END;
	}
	void UUxtGrabTargetComponent::StaticRegisterNativesUUxtGrabTargetComponent()
	{
		UClass* Class = UUxtGrabTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindGrabPointer", &UUxtGrabTargetComponent::execFindGrabPointer },
			{ "ForceEndGrab", &UUxtGrabTargetComponent::execForceEndGrab },
			{ "GetGrabPointCentroid", &UUxtGrabTargetComponent::execGetGrabPointCentroid },
			{ "GetGrabPointers", &UUxtGrabTargetComponent::execGetGrabPointers },
			{ "GetPrimaryGrabPointer", &UUxtGrabTargetComponent::execGetPrimaryGrabPointer },
			{ "GetSecondaryGrabPointer", &UUxtGrabTargetComponent::execGetSecondaryGrabPointer },
			{ "GetTargetCentroid", &UUxtGrabTargetComponent::execGetTargetCentroid },
			{ "GetTickOnlyWhileGrabbed", &UUxtGrabTargetComponent::execGetTickOnlyWhileGrabbed },
			{ "SetTickOnlyWhileGrabbed", &UUxtGrabTargetComponent::execSetTickOnlyWhileGrabbed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics
	{
		struct UxtGrabTargetComponent_eventFindGrabPointer_Parms
		{
			UUxtNearPointerComponent* NearPointer;
			UUxtFarPointerComponent* FarPointer;
			bool Success;
			FUxtGrabPointerData PointerData;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NearPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerData;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_NearPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_NearPointer = { "NearPointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventFindGrabPointer_Parms, NearPointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_NearPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_NearPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventFindGrabPointer_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_FarPointer_MetaData)) };
	void Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventFindGrabPointer_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventFindGrabPointer_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_PointerData = { "PointerData", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventFindGrabPointer_Parms, PointerData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventFindGrabPointer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_NearPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_FarPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_PointerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns true if the pointer is currently grabbing the actor.\n\x09 * PointerData will contain the associated grab data for the pointer.\n\x09 * Index is the order in which pointers started grabbing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns true if the pointer is currently grabbing the actor.\nPointerData will contain the associated grab data for the pointer.\nIndex is the order in which pointers started grabbing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "FindGrabPointer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::UxtGrabTargetComponent_eventFindGrabPointer_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics
	{
		struct UxtGrabTargetComponent_eventForceEndGrab_Parms
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
	void Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventForceEndGrab_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventForceEndGrab_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/**\n\x09 * Release all currently grabbing pointers.\n\x09 * Returns true if any pointers were grabbing and have been released, false if no pointers were grabbing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Release all currently grabbing pointers.\nReturns true if any pointers were grabbing and have been released, false if no pointers were grabbing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "ForceEndGrab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::UxtGrabTargetComponent_eventForceEndGrab_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics
	{
		struct UxtGrabTargetComponent_eventGetGrabPointCentroid_Parms
		{
			FTransform ToWorldTransform;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToWorldTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ToWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ToWorldTransform = { "ToWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetGrabPointCentroid_Parms, ToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ToWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ToWorldTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetGrabPointCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ToWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Compute the centroid of the grab points in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the centroid of the grab points in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetGrabPointCentroid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::UxtGrabTargetComponent_eventGetGrabPointCentroid_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics
	{
		struct UxtGrabTargetComponent_eventGetGrabPointers_Parms
		{
			TArray<FUxtGrabPointerData> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetGrabPointers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue_MetaData)) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns a list of all currently grabbing pointers. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns a list of all currently grabbing pointers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetGrabPointers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::UxtGrabTargetComponent_eventGetGrabPointers_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics
	{
		struct UxtGrabTargetComponent_eventGetPrimaryGrabPointer_Parms
		{
			bool Valid;
			FUxtGrabPointerData PointerData;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventGetPrimaryGrabPointer_Parms*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventGetPrimaryGrabPointer_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_PointerData = { "PointerData", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetPrimaryGrabPointer_Parms, PointerData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::NewProp_PointerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns the first active grab pointer.\n\x09 * If no pointer is grabbing the Valid output will be false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns the first active grab pointer.\nIf no pointer is grabbing the Valid output will be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetPrimaryGrabPointer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::UxtGrabTargetComponent_eventGetPrimaryGrabPointer_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics
	{
		struct UxtGrabTargetComponent_eventGetSecondaryGrabPointer_Parms
		{
			bool Valid;
			FUxtGrabPointerData PointerData;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventGetSecondaryGrabPointer_Parms*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventGetSecondaryGrabPointer_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_PointerData = { "PointerData", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetSecondaryGrabPointer_Parms, PointerData), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::NewProp_PointerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns the second active grab pointer.\n\x09 * If less than two pointers are grabbing the Valid output will be false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Returns the second active grab pointer.\nIf less than two pointers are grabbing the Valid output will be false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetSecondaryGrabPointer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::UxtGrabTargetComponent_eventGetSecondaryGrabPointer_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics
	{
		struct UxtGrabTargetComponent_eventGetTargetCentroid_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTargetComponent_eventGetTargetCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Compute the centroid of the pointer targets in world space. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Compute the centroid of the pointer targets in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetTargetCentroid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::UxtGrabTargetComponent_eventGetTargetCentroid_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics
	{
		struct UxtGrabTargetComponent_eventGetTickOnlyWhileGrabbed_Parms
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
	void Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventGetTickOnlyWhileGrabbed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventGetTickOnlyWhileGrabbed_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Grab Target" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "GetTickOnlyWhileGrabbed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::UxtGrabTargetComponent_eventGetTickOnlyWhileGrabbed_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics
	{
		struct UxtGrabTargetComponent_eventSetTickOnlyWhileGrabbed_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UxtGrabTargetComponent_eventSetTickOnlyWhileGrabbed_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTargetComponent_eventSetTickOnlyWhileGrabbed_Parms), &Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Grab Target" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTargetComponent, nullptr, "SetTickOnlyWhileGrabbed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::UxtGrabTargetComponent_eventSetTickOnlyWhileGrabbed_Parms), Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtGrabTargetComponent);
	UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister()
	{
		return UUxtGrabTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnterFarFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnterFarFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateFarFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateFarFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExitFarFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExitFarFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnterGrabFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnterGrabFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateGrabFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateGrabFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExitGrabFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExitGrabFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginGrab_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginGrab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateGrab_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateGrab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndGrab_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndGrab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabModes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrabModes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPointers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabPointers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrabPointers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickOnlyWhileGrabbed_MetaData[];
#endif
		static void NewProp_bTickOnlyWhileGrabbed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickOnlyWhileGrabbed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtManipulatorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_FindGrabPointer, "FindGrabPointer" }, // 1354446338
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_ForceEndGrab, "ForceEndGrab" }, // 3701679527
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointCentroid, "GetGrabPointCentroid" }, // 1697347952
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetGrabPointers, "GetGrabPointers" }, // 2012019325
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetPrimaryGrabPointer, "GetPrimaryGrabPointer" }, // 1414337513
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetSecondaryGrabPointer, "GetSecondaryGrabPointer" }, // 2258793811
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetTargetCentroid, "GetTargetCentroid" }, // 1340050140
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_GetTickOnlyWhileGrabbed, "GetTickOnlyWhileGrabbed" }, // 1367143038
		{ &Z_Construct_UFunction_UUxtGrabTargetComponent_SetTickOnlyWhileGrabbed, "SetTickOnlyWhileGrabbed" }, // 2879398103
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Interactable component that listens to grab events from near pointers.\n *\n * A pointer that starts grabing while near the actor is considered a grabbing pointer.\n * The grab is released when the pointer stops grabing, regardless of whether it is still near or not.\n *\n * The GrabComponent does not react to grabbing pointers by itself, but serves as a base class for manipulation.\n */" },
		{ "IncludePath", "Interactions/UxtGrabTargetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Interactable component that listens to grab events from near pointers.\n\nA pointer that starts grabing while near the actor is considered a grabbing pointer.\nThe grab is released when the pointer stops grabing, regardless of whether it is still near or not.\n\nThe GrabComponent does not react to grabbing pointers by itself, but serves as a base class for manipulation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterFarFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when entering grab focus. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when entering grab focus." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterFarFocus = { "OnEnterFarFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnEnterFarFocus), Z_Construct_UDelegateFunction_UXTools_UxtEnterFarFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterFarFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterFarFocus_MetaData)) }; // 1416261343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateFarFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when grab focus updates. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when grab focus updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateFarFocus = { "OnUpdateFarFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnUpdateFarFocus), Z_Construct_UDelegateFunction_UXTools_UxtUpdateFarFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateFarFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateFarFocus_MetaData)) }; // 386159371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitFarFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when exiting grab. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when exiting grab." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitFarFocus = { "OnExitFarFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnExitFarFocus), Z_Construct_UDelegateFunction_UXTools_UxtExitFarFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitFarFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitFarFocus_MetaData)) }; // 2244701340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterGrabFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when entering grab focus. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when entering grab focus." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterGrabFocus = { "OnEnterGrabFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnEnterGrabFocus), Z_Construct_UDelegateFunction_UXTools_UxtEnterGrabFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterGrabFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterGrabFocus_MetaData)) }; // 4032093788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrabFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when grab focus updates. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when grab focus updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrabFocus = { "OnUpdateGrabFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnUpdateGrabFocus), Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrabFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrabFocus_MetaData)) }; // 2968311523
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitGrabFocus_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when exiting grab. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when exiting grab." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitGrabFocus = { "OnExitGrabFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnExitGrabFocus), Z_Construct_UDelegateFunction_UXTools_UxtExitGrabFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitGrabFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitGrabFocus_MetaData)) }; // 3823117759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnBeginGrab_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when grab starts. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when grab starts." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnBeginGrab = { "OnBeginGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnBeginGrab), Z_Construct_UDelegateFunction_UXTools_UxtBeginGrabDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnBeginGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnBeginGrab_MetaData)) }; // 24624318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrab_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when grab updates. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when grab updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrab = { "OnUpdateGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnUpdateGrab), Z_Construct_UDelegateFunction_UXTools_UxtUpdateGrabDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrab_MetaData)) }; // 3994951569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEndGrab_MetaData[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Event raised when grab ends. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Event raised when grab ends." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEndGrab = { "OnEndGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, OnEndGrab), Z_Construct_UDelegateFunction_UXTools_UxtEndGrabDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEndGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEndGrab_MetaData)) }; // 843500473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_InteractionMode_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtInteractionMode" },
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Property that indicates if the object is grabbable with far or near interaction or both. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Property that indicates if the object is grabbable with far or near interaction or both." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, InteractionMode), METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_InteractionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_InteractionMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtGrabMode" },
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Enabled grab modes. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "Enabled grab modes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabModes = { "GrabModes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, GrabModes), METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabModes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers_Inner = { "GrabPointers", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers_MetaData[] = {
		{ "BlueprintGetter", "GetGrabPointers" },
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** List of currently grabbing pointers. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "List of currently grabbing pointers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers = { "GrabPointers", nullptr, (EPropertyFlags)0x0040008000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGrabTargetComponent, GrabPointers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers_MetaData)) }; // 1953156998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed_MetaData[] = {
		{ "BlueprintGetter", "GetTickOnlyWhileGrabbed" },
		{ "BlueprintSetter", "SetTickOnlyWhileGrabbed" },
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** If true the component tick is only enabled while the actor is being grabbed. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTargetComponent.h" },
		{ "ToolTip", "If true the component tick is only enabled while the actor is being grabbed." },
	};
#endif
	void Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed_SetBit(void* Obj)
	{
		((UUxtGrabTargetComponent*)Obj)->bTickOnlyWhileGrabbed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed = { "bTickOnlyWhileGrabbed", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UUxtGrabTargetComponent), &Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtGrabTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterFarFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateFarFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitFarFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEnterGrabFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrabFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnExitGrabFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnBeginGrab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnUpdateGrab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_OnEndGrab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_InteractionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_GrabPointers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGrabTargetComponent_Statics::NewProp_bTickOnlyWhileGrabbed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtGrabTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtGrabTargetComponent, IUxtGrabTarget), false },  // 3389507501
			{ Z_Construct_UClass_UUxtGrabHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtGrabTargetComponent, IUxtGrabHandler), false },  // 463787067
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtGrabTargetComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtGrabTargetComponent, IUxtFarHandler), false },  // 1789224393
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtGrabTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabTargetComponent_Statics::ClassParams = {
		&UUxtGrabTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtGrabTargetComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtGrabTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtGrabTargetComponent.OuterSingleton, Z_Construct_UClass_UUxtGrabTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtGrabTargetComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabTargetComponent>()
	{
		return UUxtGrabTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabTargetComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ScriptStructInfo[] = {
		{ FUxtGrabPointerData::StaticStruct, Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics::NewStructOps, TEXT("UxtGrabPointerData"), &Z_Registration_Info_UScriptStruct_UxtGrabPointerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtGrabPointerData), 1953156998U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary, UUxtGrabPointerDataFunctionLibrary::StaticClass, TEXT("UUxtGrabPointerDataFunctionLibrary"), &Z_Registration_Info_UClass_UUxtGrabPointerDataFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtGrabPointerDataFunctionLibrary), 944646556U) },
		{ Z_Construct_UClass_UUxtGrabTargetComponent, UUxtGrabTargetComponent::StaticClass, TEXT("UUxtGrabTargetComponent"), &Z_Registration_Info_UClass_UUxtGrabTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtGrabTargetComponent), 3692768930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_1925109100(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
