// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRSimulation/Public/XRSimulationHeadMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRSimulationHeadMovementComponent() {}
// Cross Module References
	XRSIMULATION_API UClass* Z_Construct_UClass_UXRSimulationHeadMovementComponent_NoRegister();
	XRSIMULATION_API UClass* Z_Construct_UClass_UXRSimulationHeadMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_XRSimulation();
// End Cross Module References
	DEFINE_FUNCTION(UXRSimulationHeadMovementComponent::execSetHeadMovementEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadMovementEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRSimulationHeadMovementComponent::execIsHeadMovementEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeadMovementEnabled();
		P_NATIVE_END;
	}
	void UXRSimulationHeadMovementComponent::StaticRegisterNativesUXRSimulationHeadMovementComponent()
	{
		UClass* Class = UXRSimulationHeadMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHeadMovementEnabled", &UXRSimulationHeadMovementComponent::execIsHeadMovementEnabled },
			{ "SetHeadMovementEnabled", &UXRSimulationHeadMovementComponent::execSetHeadMovementEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics
	{
		struct XRSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms
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
	void Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms), &Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "XRSimulation" },
		{ "ModuleRelativePath", "Public/XRSimulationHeadMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRSimulationHeadMovementComponent, nullptr, "IsHeadMovementEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::XRSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms), Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics
	{
		struct XRSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms
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
	void Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((XRSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms), &Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "XRSimulation" },
		{ "ModuleRelativePath", "Public/XRSimulationHeadMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRSimulationHeadMovementComponent, nullptr, "SetHeadMovementEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::XRSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms), Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRSimulationHeadMovementComponent);
	UClass* Z_Construct_UClass_UXRSimulationHeadMovementComponent_NoRegister()
	{
		return UXRSimulationHeadMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeadMovement_MetaData[];
#endif
		static void NewProp_bEnableHeadMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeadMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XRSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRSimulationHeadMovementComponent_IsHeadMovementEnabled, "IsHeadMovementEnabled" }, // 2294162701
		{ &Z_Construct_UFunction_UXRSimulationHeadMovementComponent_SetHeadMovementEnabled, "SetHeadMovementEnabled" }, // 921329925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "XRSimulation" },
		{ "Comment", "/** Movement component that applies user input.\n *  Works similar to UFloatingPawnMovement, but does not require a APawn actor.\n */" },
		{ "IncludePath", "XRSimulationHeadMovementComponent.h" },
		{ "ModuleRelativePath", "Public/XRSimulationHeadMovementComponent.h" },
		{ "ToolTip", "Movement component that applies user input.\nWorks similar to UFloatingPawnMovement, but does not require a APawn actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData[] = {
		{ "BlueprintGetter", "IsHeadMovementEnabled" },
		{ "BlueprintSetter", "SetHeadMovementEnabled" },
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Enable linear movement of the head position. */" },
		{ "ModuleRelativePath", "Public/XRSimulationHeadMovementComponent.h" },
		{ "ToolTip", "Enable linear movement of the head position." },
	};
#endif
	void Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_SetBit(void* Obj)
	{
		((UXRSimulationHeadMovementComponent*)Obj)->bEnableHeadMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement = { "bEnableHeadMovement", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXRSimulationHeadMovementComponent), &Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRSimulationHeadMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::ClassParams = {
		&UXRSimulationHeadMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRSimulationHeadMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UXRSimulationHeadMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRSimulationHeadMovementComponent.OuterSingleton, Z_Construct_UClass_UXRSimulationHeadMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRSimulationHeadMovementComponent.OuterSingleton;
	}
	template<> XRSIMULATION_API UClass* StaticClass<UXRSimulationHeadMovementComponent>()
	{
		return UXRSimulationHeadMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRSimulationHeadMovementComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationHeadMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationHeadMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRSimulationHeadMovementComponent, UXRSimulationHeadMovementComponent::StaticClass, TEXT("UXRSimulationHeadMovementComponent"), &Z_Registration_Info_UClass_UXRSimulationHeadMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRSimulationHeadMovementComponent), 4033757340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationHeadMovementComponent_h_440153274(TEXT("/Script/XRSimulation"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationHeadMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationHeadMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
