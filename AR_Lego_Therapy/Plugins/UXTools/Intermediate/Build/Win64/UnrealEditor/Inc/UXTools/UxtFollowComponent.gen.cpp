// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Behaviors/UxtFollowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFollowComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFollowComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFollowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtFollowOrientBehavior;
	static UEnum* EUxtFollowOrientBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtFollowOrientBehavior"));
		}
		return Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtFollowOrientBehavior>()
	{
		return EUxtFollowOrientBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enumerators[] = {
		{ "FaceCamera", (int64)FaceCamera },
		{ "WorldLock", (int64)WorldLock },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FaceCamera.Comment", "/** Billboard toward the camera */" },
		{ "FaceCamera.DisplayName", "FaceCamera" },
		{ "FaceCamera.Name", "FaceCamera" },
		{ "FaceCamera.ToolTip", "Billboard toward the camera" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "WorldLock.Comment", "/** Do not billboard unless one of three conditions are met: Angular Clamp, Distance Clamp, or camera leaves\n\x09   OrientToCameraDeadzoneDegrees */" },
		{ "WorldLock.DisplayName", "WorldLock" },
		{ "WorldLock.Name", "WorldLock" },
		{ "WorldLock.ToolTip", "Do not billboard unless one of three conditions are met: Angular Clamp, Distance Clamp, or camera leaves\n         OrientToCameraDeadzoneDegrees" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtFollowOrientBehavior",
		"EUxtFollowOrientBehavior",
		Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior()
	{
		if (!Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtFollowOrientBehavior.InnerSingleton;
	}
	DEFINE_FUNCTION(UUxtFollowComponent::execRecenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Recenter();
		P_NATIVE_END;
	}
	void UUxtFollowComponent::StaticRegisterNativesUUxtFollowComponent()
	{
		UClass* Class = UUxtFollowComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Recenter", &UUxtFollowComponent::execRecenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Follow" },
		{ "Comment", "/** Force the owner to recenter in the camera's field of view. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Force the owner to recenter in the camera's field of view." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFollowComponent, nullptr, "Recenter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFollowComponent_Recenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtFollowComponent_Recenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFollowComponent);
	UClass* Z_Construct_UClass_UUxtFollowComponent_NoRegister()
	{
		return UUxtFollowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFollowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToFollow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFollow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientToCameraDeadzoneDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientToCameraDeadzoneDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDistanceClamp_MetaData[];
#endif
		static void NewProp_bIgnoreDistanceClamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDistanceClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedVerticalOffset_MetaData[];
#endif
		static void NewProp_bUseFixedVerticalOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedVerticalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedVerticalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedVerticalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAngleClamp_MetaData[];
#endif
		static void NewProp_bIgnoreAngleClamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAngleClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewHorizontalDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewHorizontalDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewVerticalDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewVerticalDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCameraPitchAndRoll_MetaData[];
#endif
		static void NewProp_bIgnoreCameraPitchAndRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCameraPitchAndRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePose_MetaData[];
#endif
		static void NewProp_bInterpolatePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFollowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFollowComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFollowComponent_Recenter, "Recenter" }, // 3887635148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * The follow component has three different constraints that keeps its owner in front of the camera: Angular\n * Clamp, Distance Clamp, and Orientation. The combination of Angular and Distance Clamp creates a\n * frustum in front of the camera where its owner can be. If its owner is outside that frustum\n * it is adjusted.\n *\n * Angular Clamp: The objective of this constraint is to ensure that the reference forward vector remains\n * within the bounds set by the leashing parameters. To do this, determine the angles between toTarget\n * and the leashing bounds about the global Z-axis and the reference's Y-axis. If the toTarget falls\n * within the leashing bounds, then we don't have to modify it. Otherwise, we apply a correction\n * rotation to bring it within bounds. This will ensure that the its owner stays within the\n * top, bottom, right and left planes of the frustum.\n *\n * Distance Clamp: The objective of this constraint is to ensure that the following actor stays within bounds\n * set by the distance parameters. To do this, we measure the current distance from the camera to the\n * its owner. If the distance is within the MinimumDistance and MaximumDistance then we don't have to\n * modify it. Otherwise, we push away or pull in the its owner along the reference forward vector.\n * This will ensure that the its owner stays within the near and far planes of the frustum.\n *\n * Orientation: The two options provided are constant FaceCamera or WorldLock. While world locked there are\n * three conditions that will cause the its owner to face the camera:\n * \x09""Angular Clamps\n * \x09""Distance Clamps\n * \x09The angle between the forward vector of the its owner and toTarget vector (vector between\n * \x09\x09the camera and the its owner) is larger than dead zone angle parameter\n */" },
		{ "IncludePath", "Behaviors/UxtFollowComponent.h" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "The follow component has three different constraints that keeps its owner in front of the camera: Angular\nClamp, Distance Clamp, and Orientation. The combination of Angular and Distance Clamp creates a\nfrustum in front of the camera where its owner can be. If its owner is outside that frustum\nit is adjusted.\n\nAngular Clamp: The objective of this constraint is to ensure that the reference forward vector remains\nwithin the bounds set by the leashing parameters. To do this, determine the angles between toTarget\nand the leashing bounds about the global Z-axis and the reference's Y-axis. If the toTarget falls\nwithin the leashing bounds, then we don't have to modify it. Otherwise, we apply a correction\nrotation to bring it within bounds. This will ensure that the its owner stays within the\ntop, bottom, right and left planes of the frustum.\n\nDistance Clamp: The objective of this constraint is to ensure that the following actor stays within bounds\nset by the distance parameters. To do this, we measure the current distance from the camera to the\nits owner. If the distance is within the MinimumDistance and MaximumDistance then we don't have to\nmodify it. Otherwise, we push away or pull in the its owner along the reference forward vector.\nThis will ensure that the its owner stays within the near and far planes of the frustum.\n\nOrientation: The two options provided are constant FaceCamera or WorldLock. While world locked there are\nthree conditions that will cause the its owner to face the camera:\n    Angular Clamps\n    Distance Clamps\n    The angle between the forward vector of the its owner and toTarget vector (vector between\n            the camera and the its owner) is larger than dead zone angle parameter" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_ActorToFollow_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Actor that this component will follow. If null, this component will follow the camera */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Actor that this component will follow. If null, this component will follow the camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_ActorToFollow = { "ActorToFollow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, ActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_ActorToFollow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_ActorToFollow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientationType_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Orientation Type */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Orientation Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientationType = { "OrientationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, OrientationType), Z_Construct_UEnum_UXTools_EUxtFollowOrientBehavior, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientationType_MetaData)) }; // 1214653120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientToCameraDeadzoneDegrees_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** The owner will not reorient until the angle between its forward vector and the vector to the camera is greater than this value */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "The owner will not reorient until the angle between its forward vector and the vector to the camera is greater than this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientToCameraDeadzoneDegrees = { "OrientToCameraDeadzoneDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, OrientToCameraDeadzoneDegrees), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientToCameraDeadzoneDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientToCameraDeadzoneDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Option to ignore distance clamping */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Option to ignore distance clamping" },
	};
#endif
	void Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp_SetBit(void* Obj)
	{
		((UUxtFollowComponent*)Obj)->bIgnoreDistanceClamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp = { "bIgnoreDistanceClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFollowComponent), &Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MinimumDistance_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Min distance from eye to position its owner around, i.e. the sphere radius */" },
		{ "EditCondition", "!bIgnoreDistanceClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Min distance from eye to position its owner around, i.e. the sphere radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, MinimumDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MinimumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Max distance from eye to its owner */" },
		{ "EditCondition", "!bIgnoreDistanceClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Max distance from eye to its owner" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, MaximumDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_DefaultDistance_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Default distance from eye to position its owner around, i.e. the sphere radius */" },
		{ "EditCondition", "!bIgnoreDistanceClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Default distance from eye to position its owner around, i.e. the sphere radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_DefaultDistance = { "DefaultDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, DefaultDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_DefaultDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_DefaultDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_VerticalMaxDistance_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Max vertical distance between the owner and camera */" },
		{ "EditCondition", "!bIgnoreDistanceClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Max vertical distance between the owner and camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_VerticalMaxDistance = { "VerticalMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, VerticalMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_VerticalMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_VerticalMaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Ignore vertical movement and lock the Y position of the object. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Ignore vertical movement and lock the Y position of the object." },
	};
#endif
	void Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset_SetBit(void* Obj)
	{
		((UUxtFollowComponent*)Obj)->bUseFixedVerticalOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset = { "bUseFixedVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFollowComponent), &Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_FixedVerticalOffset_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Fixed vertical position offset distance. */" },
		{ "EditCondition", "bUseFixedVerticalOffset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Fixed vertical position offset distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_FixedVerticalOffset = { "FixedVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, FixedVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_FixedVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_FixedVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Option to ignore angle clamping */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Option to ignore angle clamping" },
	};
#endif
	void Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp_SetBit(void* Obj)
	{
		((UUxtFollowComponent*)Obj)->bIgnoreAngleClamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp = { "bIgnoreAngleClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFollowComponent), &Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewHorizontalDegrees_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** The horizontal angle from the camera forward axis to the owner will not exceed this value */" },
		{ "EditCondition", "!bIgnoreAngleClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "The horizontal angle from the camera forward axis to the owner will not exceed this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewHorizontalDegrees = { "MaxViewHorizontalDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, MaxViewHorizontalDegrees), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewHorizontalDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewHorizontalDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewVerticalDegrees_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** The vertical angle from the camera forward axis to the owner will not exceed this value */" },
		{ "EditCondition", "!bIgnoreAngleClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "The vertical angle from the camera forward axis to the owner will not exceed this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewVerticalDegrees = { "MaxViewVerticalDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, MaxViewVerticalDegrees), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewVerticalDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewVerticalDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Option to ignore the pitch and roll of the camera */" },
		{ "EditCondition", "!bIgnoreAngleClamp" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Option to ignore the pitch and roll of the camera" },
	};
#endif
	void Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll_SetBit(void* Obj)
	{
		((UUxtFollowComponent*)Obj)->bIgnoreCameraPitchAndRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll = { "bIgnoreCameraPitchAndRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFollowComponent), &Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_PitchOffset_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Pitch offset from camera (relative to Max Distance) */" },
		{ "EditCondition", "bIgnoreCameraPitchAndRoll && !bIgnoreAngleClamp && !bUseFixedVerticalOffset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Pitch offset from camera (relative to Max Distance)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_PitchOffset = { "PitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, PitchOffset), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_PitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_PitchOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Option to ignore interpolation between follow poses */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Option to ignore interpolation between follow poses" },
	};
#endif
	void Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose_SetBit(void* Obj)
	{
		((UUxtFollowComponent*)Obj)->bInterpolatePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose = { "bInterpolatePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFollowComponent), &Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_LerpTime_MetaData[] = {
		{ "Category", "UxtFollow" },
		{ "Comment", "/** Rate at which its owner will move toward default distance when angular leashing */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtFollowComponent.h" },
		{ "ToolTip", "Rate at which its owner will move toward default distance when angular leashing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_LerpTime = { "LerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFollowComponent, LerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_LerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_LerpTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFollowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_ActorToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_OrientToCameraDeadzoneDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreDistanceClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MinimumDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaximumDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_DefaultDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_VerticalMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bUseFixedVerticalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_FixedVerticalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreAngleClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewHorizontalDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_MaxViewVerticalDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bIgnoreCameraPitchAndRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_PitchOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_bInterpolatePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFollowComponent_Statics::NewProp_LerpTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFollowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFollowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFollowComponent_Statics::ClassParams = {
		&UUxtFollowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtFollowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFollowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFollowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFollowComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtFollowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFollowComponent.OuterSingleton, Z_Construct_UClass_UUxtFollowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFollowComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFollowComponent>()
	{
		return UUxtFollowComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFollowComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::EnumInfo[] = {
		{ EUxtFollowOrientBehavior_StaticEnum, TEXT("EUxtFollowOrientBehavior"), &Z_Registration_Info_UEnum_EUxtFollowOrientBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214653120U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFollowComponent, UUxtFollowComponent::StaticClass, TEXT("UUxtFollowComponent"), &Z_Registration_Info_UClass_UUxtFollowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFollowComponent), 662030696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_1443010749(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
