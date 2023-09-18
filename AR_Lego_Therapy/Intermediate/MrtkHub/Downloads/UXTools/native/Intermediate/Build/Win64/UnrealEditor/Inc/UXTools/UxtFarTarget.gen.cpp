// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtFarTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarTarget() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtFarTarget::execIsFarFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFarFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtFarTarget::IsFarFocusable(const UPrimitiveComponent* Primitive) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFarFocusable instead.");
		UxtFarTarget_eventIsFarFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUxtFarTarget::StaticRegisterNativesUUxtFarTarget()
	{
		UClass* Class = UUxtFarTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFarFocusable", &IUxtFarTarget::execIsFarFocusable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventIsFarFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData)) };
	void Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtFarTarget_eventIsFarFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtFarTarget_eventIsFarFocusable_Parms), &Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Target" },
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "IsFarFocusable", nullptr, nullptr, sizeof(UxtFarTarget_eventIsFarFocusable_Parms), Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFarTarget);
	UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister()
	{
		return UUxtFarTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable, "IsFarFocusable" }, // 3645150098
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtFarTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarTarget_Statics::ClassParams = {
		&UUxtFarTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarTarget()
	{
		if (!Z_Registration_Info_UClass_UUxtFarTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFarTarget.OuterSingleton, Z_Construct_UClass_UUxtFarTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFarTarget.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarTarget>()
	{
		return UUxtFarTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarTarget);
	static FName NAME_UUxtFarTarget_IsFarFocusable = FName(TEXT("IsFarFocusable"));
	bool IUxtFarTarget::Execute_IsFarFocusable(const UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventIsFarFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_IsFarFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsFarFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFarTarget, UUxtFarTarget::StaticClass, TEXT("UUxtFarTarget"), &Z_Registration_Info_UClass_UUxtFarTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFarTarget), 3674043034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_4065124748(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
