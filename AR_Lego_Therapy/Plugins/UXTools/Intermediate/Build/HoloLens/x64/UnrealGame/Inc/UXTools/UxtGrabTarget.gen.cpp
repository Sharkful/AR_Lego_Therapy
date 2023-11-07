// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGrabTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGrabTarget() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtGrabTarget::execIsGrabFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrabFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtGrabTarget::IsGrabFocusable(const UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsGrabFocusable instead.");
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUxtGrabTarget::StaticRegisterNativesUUxtGrabTarget()
	{
		UClass* Class = UUxtGrabTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGrabFocusable", &IUxtGrabTarget::execIsGrabFocusable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventIsGrabFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabTarget_eventIsGrabFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Grab Target" },
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "IsGrabFocusable", nullptr, nullptr, sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtGrabTarget);
	UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister()
	{
		return UUxtGrabTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable, "IsGrabFocusable" }, // 2540178301
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtGrabTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams = {
		&UUxtGrabTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabTarget()
	{
		if (!Z_Registration_Info_UClass_UUxtGrabTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtGrabTarget.OuterSingleton, Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtGrabTarget.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabTarget>()
	{
		return UUxtGrabTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabTarget);
	static FName NAME_UUxtGrabTarget_IsGrabFocusable = FName(TEXT("IsGrabFocusable"));
	bool IUxtGrabTarget::Execute_IsGrabFocusable(const UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_IsGrabFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsGrabFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtGrabTarget, UUxtGrabTarget::StaticClass, TEXT("UUxtGrabTarget"), &Z_Registration_Info_UClass_UUxtGrabTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtGrabTarget), 3389507501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_3967852512(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
