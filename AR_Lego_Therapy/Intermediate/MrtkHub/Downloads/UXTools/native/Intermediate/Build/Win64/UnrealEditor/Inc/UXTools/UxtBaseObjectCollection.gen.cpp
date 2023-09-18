// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBaseObjectCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBaseObjectCollection() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBaseObjectCollection_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBaseObjectCollection();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms
		{
			const AActor* LHS;
			const AActor* RHS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LHS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHS_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RHS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms, LHS), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_LHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_LHS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_RHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_RHS = { "RHS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms, RHS), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_RHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_RHS_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_LHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_RHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtSortScrollingObjectCollectionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtSortScrollingObjectCollectionDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtBaseObjectCollection::execCompareString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LHS);
		P_GET_PROPERTY(FStrProperty,Z_Param_RHS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtBaseObjectCollection::CompareString(Z_Param_LHS,Z_Param_RHS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBaseObjectCollection::execCompareText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_LHS);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_RHS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtBaseObjectCollection::CompareText(Z_Param_Out_LHS,Z_Param_Out_RHS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBaseObjectCollection::execSetSortCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSortCallback(FUxtSortScrollingObjectCollectionDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	void UUxtBaseObjectCollection::StaticRegisterNativesUUxtBaseObjectCollection()
	{
		UClass* Class = UUxtBaseObjectCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareString", &UUxtBaseObjectCollection::execCompareString },
			{ "CompareText", &UUxtBaseObjectCollection::execCompareText },
			{ "SetSortCallback", &UUxtBaseObjectCollection::execSetSortCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics
	{
		struct UxtBaseObjectCollection_eventCompareString_Parms
		{
			FString LHS;
			FString RHS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LHS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHS_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RHS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBaseObjectCollection_eventCompareString_Parms, LHS), METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_LHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_LHS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_RHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_RHS = { "RHS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBaseObjectCollection_eventCompareString_Parms, RHS), METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_RHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_RHS_MetaData)) };
	void Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtBaseObjectCollection_eventCompareString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtBaseObjectCollection_eventCompareString_Parms), &Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_LHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_RHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Base Object Collection - Experimental" },
		{ "Comment", "/** Helper function to allow Blueprint class to easily compare a pair of string objects within sort. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Helper function to allow Blueprint class to easily compare a pair of string objects within sort." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBaseObjectCollection, nullptr, "CompareString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::UxtBaseObjectCollection_eventCompareString_Parms), Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics
	{
		struct UxtBaseObjectCollection_eventCompareText_Parms
		{
			FText LHS;
			FText RHS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LHS_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LHS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHS_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RHS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_LHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_LHS = { "LHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBaseObjectCollection_eventCompareText_Parms, LHS), METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_LHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_LHS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_RHS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_RHS = { "RHS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBaseObjectCollection_eventCompareText_Parms, RHS), METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_RHS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_RHS_MetaData)) };
	void Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtBaseObjectCollection_eventCompareText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtBaseObjectCollection_eventCompareText_Parms), &Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_LHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_RHS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Base Object Collection - Experimental" },
		{ "Comment", "/** Helper function to allow Blueprint class to easily compare a pair of text objects within sort. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Helper function to allow Blueprint class to easily compare a pair of text objects within sort." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBaseObjectCollection, nullptr, "CompareText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::UxtBaseObjectCollection_eventCompareText_Parms), Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics
	{
		struct UxtBaseObjectCollection_eventSetSortCallback_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBaseObjectCollection_eventSetSortCallback_Parms, Callback), Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::NewProp_Callback_MetaData)) }; // 3490539663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "Uxt Base Object Collection - Experimental" },
		{ "Comment", "/** Set the the callback function to be used by the sort to compare actor pairs.\n\x09 *\x09In order to see results of sorting with the editor it is necessary to enable run in editor in the functions details panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Set the the callback function to be used by the sort to compare actor pairs.\n    In order to see results of sorting with the editor it is necessary to enable run in editor in the functions details panel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBaseObjectCollection, nullptr, "SetSortCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::UxtBaseObjectCollection_eventSetSortCallback_Parms), Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtBaseObjectCollection);
	UClass* Z_Construct_UClass_UUxtBaseObjectCollection_NoRegister()
	{
		return UUxtBaseObjectCollection::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBaseObjectCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortCollection_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SortCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBaseObjectCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtBaseObjectCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtBaseObjectCollection_CompareString, "CompareString" }, // 3384502342
		{ &Z_Construct_UFunction_UUxtBaseObjectCollection_CompareText, "CompareText" }, // 3190823740
		{ &Z_Construct_UFunction_UUxtBaseObjectCollection_SetSortCallback, "SetSortCallback" }, // 3414670581
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBaseObjectCollection_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools - Experimental" },
		{ "Comment", "/**\n * Base scene component class for object collections\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtBaseObjectCollection.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Base scene component class for object collections" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBaseObjectCollection_Statics::NewProp_SortCollection_MetaData[] = {
		{ "Comment", "/*  Event raised to allow the blueprint to override the default sorting method. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBaseObjectCollection.h" },
		{ "ToolTip", "Event raised to allow the blueprint to override the default sorting method." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUxtBaseObjectCollection_Statics::NewProp_SortCollection = { "SortCollection", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBaseObjectCollection, SortCollection), Z_Construct_UDelegateFunction_UXTools_UxtSortScrollingObjectCollectionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtBaseObjectCollection_Statics::NewProp_SortCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBaseObjectCollection_Statics::NewProp_SortCollection_MetaData)) }; // 3490539663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBaseObjectCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBaseObjectCollection_Statics::NewProp_SortCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBaseObjectCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBaseObjectCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtBaseObjectCollection_Statics::ClassParams = {
		&UUxtBaseObjectCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtBaseObjectCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBaseObjectCollection_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBaseObjectCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBaseObjectCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBaseObjectCollection()
	{
		if (!Z_Registration_Info_UClass_UUxtBaseObjectCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtBaseObjectCollection.OuterSingleton, Z_Construct_UClass_UUxtBaseObjectCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtBaseObjectCollection.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtBaseObjectCollection>()
	{
		return UUxtBaseObjectCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBaseObjectCollection);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBaseObjectCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBaseObjectCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtBaseObjectCollection, UUxtBaseObjectCollection::StaticClass, TEXT("UUxtBaseObjectCollection"), &Z_Registration_Info_UClass_UUxtBaseObjectCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtBaseObjectCollection), 2342181282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBaseObjectCollection_h_1199803608(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBaseObjectCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBaseObjectCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
