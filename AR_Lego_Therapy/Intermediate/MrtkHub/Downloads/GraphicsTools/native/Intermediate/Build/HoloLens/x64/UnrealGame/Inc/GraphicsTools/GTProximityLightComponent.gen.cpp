// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTProximityLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTProximityLightComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTProximityLightComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTProximityLightComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseFadeTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPulseFadeTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPulseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execPulse)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pulse(Z_Param_Duration,Z_Param_FadeOffset,Z_Param_FadeDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetOuterColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetOuterColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetOuterColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetMiddleColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiddleColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetMiddleColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMiddleColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetCenterColorParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterColorParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetCenterColorParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCenterColorParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetPulseSettingsParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPulseSettingsParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetPulseSettingsParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetPulseSettingsParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetSettingsParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingsParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetSettingsParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSettingsParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetLocationParameterNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_Names);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationParameterNames(Z_Param_Out_Names);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetLocationParameterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetLocationParameterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetOuterColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetOuterColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetOuterColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetMiddleColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiddleColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetMiddleColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetMiddleColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetCenterColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCenterColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetCenterColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetCenterColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetShrinkPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShrinkPercentage(Z_Param_Percentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetShrinkPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShrinkPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetShrinkDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShrinkDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetShrinkDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShrinkDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetAttenuationRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttenuationRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetAttenuationRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execSetProjectedRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectedRadius(Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTProximityLightComponent::execGetProjectedRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectedRadius();
		P_NATIVE_END;
	}
	void UGTProximityLightComponent::StaticRegisterNativesUGTProximityLightComponent()
	{
		UClass* Class = UGTProximityLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UGTProximityLightComponent::execGetAttenuationRadius },
			{ "GetCenterColor", &UGTProximityLightComponent::execGetCenterColor },
			{ "GetCenterColorParameterNames", &UGTProximityLightComponent::execGetCenterColorParameterNames },
			{ "GetLocationParameterNames", &UGTProximityLightComponent::execGetLocationParameterNames },
			{ "GetMiddleColor", &UGTProximityLightComponent::execGetMiddleColor },
			{ "GetMiddleColorParameterNames", &UGTProximityLightComponent::execGetMiddleColorParameterNames },
			{ "GetOuterColor", &UGTProximityLightComponent::execGetOuterColor },
			{ "GetOuterColorParameterNames", &UGTProximityLightComponent::execGetOuterColorParameterNames },
			{ "GetProjectedRadius", &UGTProximityLightComponent::execGetProjectedRadius },
			{ "GetPulseFadeTime", &UGTProximityLightComponent::execGetPulseFadeTime },
			{ "GetPulseSettingsParameterNames", &UGTProximityLightComponent::execGetPulseSettingsParameterNames },
			{ "GetPulseTime", &UGTProximityLightComponent::execGetPulseTime },
			{ "GetSettingsParameterNames", &UGTProximityLightComponent::execGetSettingsParameterNames },
			{ "GetShrinkDistance", &UGTProximityLightComponent::execGetShrinkDistance },
			{ "GetShrinkPercentage", &UGTProximityLightComponent::execGetShrinkPercentage },
			{ "Pulse", &UGTProximityLightComponent::execPulse },
			{ "SetAttenuationRadius", &UGTProximityLightComponent::execSetAttenuationRadius },
			{ "SetCenterColor", &UGTProximityLightComponent::execSetCenterColor },
			{ "SetCenterColorParameterNames", &UGTProximityLightComponent::execSetCenterColorParameterNames },
			{ "SetLocationParameterNames", &UGTProximityLightComponent::execSetLocationParameterNames },
			{ "SetMiddleColor", &UGTProximityLightComponent::execSetMiddleColor },
			{ "SetMiddleColorParameterNames", &UGTProximityLightComponent::execSetMiddleColorParameterNames },
			{ "SetOuterColor", &UGTProximityLightComponent::execSetOuterColor },
			{ "SetOuterColorParameterNames", &UGTProximityLightComponent::execSetOuterColorParameterNames },
			{ "SetProjectedRadius", &UGTProximityLightComponent::execSetProjectedRadius },
			{ "SetPulseSettingsParameterNames", &UGTProximityLightComponent::execSetPulseSettingsParameterNames },
			{ "SetSettingsParameterNames", &UGTProximityLightComponent::execSetSettingsParameterNames },
			{ "SetShrinkDistance", &UGTProximityLightComponent::execSetShrinkDistance },
			{ "SetShrinkPercentage", &UGTProximityLightComponent::execSetShrinkPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics
	{
		struct GTProximityLightComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's attenuation radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's attenuation radius." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::GTProximityLightComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics
	{
		struct GTProximityLightComponent_eventGetCenterColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetCenterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's center color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's center color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetCenterColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::GTProximityLightComponent_eventGetCenterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetCenterColorParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetCenterColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each center color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each center color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetCenterColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::GTProximityLightComponent_eventGetCenterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetLocationParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetLocationParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each location of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each location of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetLocationParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::GTProximityLightComponent_eventGetLocationParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics
	{
		struct GTProximityLightComponent_eventGetMiddleColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetMiddleColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's middle color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's middle color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetMiddleColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::GTProximityLightComponent_eventGetMiddleColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each middle color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each middle color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetMiddleColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::GTProximityLightComponent_eventGetMiddleColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics
	{
		struct GTProximityLightComponent_eventGetOuterColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetOuterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's outer color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's outer color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetOuterColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::GTProximityLightComponent_eventGetOuterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetOuterColorParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetOuterColorParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each outer color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each outer color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetOuterColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::GTProximityLightComponent_eventGetOuterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics
	{
		struct GTProximityLightComponent_eventGetProjectedRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetProjectedRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's projected radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's projected radius." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetProjectedRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::GTProximityLightComponent_eventGetProjectedRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics
	{
		struct GTProximityLightComponent_eventGetPulseFadeTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseFadeTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Calculates the normalized pulse fade animation time. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Calculates the normalized pulse fade animation time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseFadeTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::GTProximityLightComponent_eventGetPulseFadeTime_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each pulse setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each pulse setting of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseSettingsParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::GTProximityLightComponent_eventGetPulseSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics
	{
		struct GTProximityLightComponent_eventGetPulseTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetPulseTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Calculates the normalized pulse animation time. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Calculates the normalized pulse animation time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetPulseTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::GTProximityLightComponent_eventGetPulseTime_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventGetSettingsParameterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetSettingsParameterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Gets the material parameter name array used to represent each setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Gets the material parameter name array used to represent each setting of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetSettingsParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::GTProximityLightComponent_eventGetSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics
	{
		struct GTProximityLightComponent_eventGetShrinkDistance_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetShrinkDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's shrink distance. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's shrink distance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetShrinkDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::GTProximityLightComponent_eventGetShrinkDistance_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics
	{
		struct GTProximityLightComponent_eventGetShrinkPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventGetShrinkPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Accessor to the light's shrink percentage. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Accessor to the light's shrink percentage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "GetShrinkPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::GTProximityLightComponent_eventGetShrinkPercentage_Parms), Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics
	{
		struct GTProximityLightComponent_eventPulse_Parms
		{
			float Duration;
			float FadeOffset;
			float FadeDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeOffset = { "FadeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, FadeOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeDuration = { "FadeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventPulse_Parms, FadeDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::NewProp_FadeDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Initiates a pulse, if one is not already occurring, which simulates a user touching a surface. */" },
		{ "CPP_Default_Duration", "0.200000" },
		{ "CPP_Default_FadeDuration", "0.100000" },
		{ "CPP_Default_FadeOffset", "0.100000" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Initiates a pulse, if one is not already occurring, which simulates a user touching a surface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "Pulse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::GTProximityLightComponent_eventPulse_Parms), Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_Pulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_Pulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics
	{
		struct GTProximityLightComponent_eventSetAttenuationRadius_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetAttenuationRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's attenuation radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's attenuation radius." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetAttenuationRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::GTProximityLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics
	{
		struct GTProximityLightComponent_eventSetCenterColor_Parms
		{
			FColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetCenterColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's center color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's center color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetCenterColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::GTProximityLightComponent_eventSetCenterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetCenterColorParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetCenterColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each center color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each center color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetCenterColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::GTProximityLightComponent_eventSetCenterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetLocationParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetLocationParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each location of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each location of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetLocationParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::GTProximityLightComponent_eventSetLocationParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics
	{
		struct GTProximityLightComponent_eventSetMiddleColor_Parms
		{
			FColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetMiddleColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's middle color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's middle color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetMiddleColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::GTProximityLightComponent_eventSetMiddleColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each middle color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each middle color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetMiddleColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::GTProximityLightComponent_eventSetMiddleColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics
	{
		struct GTProximityLightComponent_eventSetOuterColor_Parms
		{
			FColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetOuterColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's outer color. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's outer color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetOuterColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::GTProximityLightComponent_eventSetOuterColor_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetOuterColorParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetOuterColorParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each outer color of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each outer color of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetOuterColorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::GTProximityLightComponent_eventSetOuterColorParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics
	{
		struct GTProximityLightComponent_eventSetProjectedRadius_Parms
		{
			float Radius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetProjectedRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's projected radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's projected radius." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetProjectedRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::GTProximityLightComponent_eventSetProjectedRadius_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each pulse setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each pulse setting of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetPulseSettingsParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::GTProximityLightComponent_eventSetPulseSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics
	{
		struct GTProximityLightComponent_eventSetSettingsParameterNames_Parms
		{
			TArray<FName> Names;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetSettingsParameterNames_Parms, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::NewProp_Names,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the material parameter name array used to represent each setting of a ProximityLight. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the material parameter name array used to represent each setting of a ProximityLight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetSettingsParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::GTProximityLightComponent_eventSetSettingsParameterNames_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics
	{
		struct GTProximityLightComponent_eventSetShrinkDistance_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetShrinkDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's shrink distance. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's shrink distance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetShrinkDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::GTProximityLightComponent_eventSetShrinkDistance_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics
	{
		struct GTProximityLightComponent_eventSetShrinkPercentage_Parms
		{
			float Percentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTProximityLightComponent_eventSetShrinkPercentage_Parms, Percentage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Light" },
		{ "Comment", "/** Sets the light's shrink percentage. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Sets the light's shrink percentage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTProximityLightComponent, nullptr, "SetShrinkPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::GTProximityLightComponent_eventSetShrinkPercentage_Parms), Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTProximityLightComponent);
	UClass* Z_Construct_UClass_UGTProximityLightComponent_NoRegister()
	{
		return UGTProximityLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTProximityLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectedRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectedRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrinkDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrinkPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MiddleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterColor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LocationParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SettingsParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingsParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PulseSettingsParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PulseSettingsParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PulseSettingsParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CenterColorParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterColorParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CenterColorParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MiddleColorParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleColorParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MiddleColorParameterNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OuterColorParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterColorParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterColorParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTProximityLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTProximityLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 1198352422
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColor, "GetCenterColor" }, // 1766730375
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetCenterColorParameterNames, "GetCenterColorParameterNames" }, // 456740663
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetLocationParameterNames, "GetLocationParameterNames" }, // 2573769856
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColor, "GetMiddleColor" }, // 3181334044
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetMiddleColorParameterNames, "GetMiddleColorParameterNames" }, // 380530400
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColor, "GetOuterColor" }, // 2167179127
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetOuterColorParameterNames, "GetOuterColorParameterNames" }, // 1787018665
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetProjectedRadius, "GetProjectedRadius" }, // 662395793
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseFadeTime, "GetPulseFadeTime" }, // 2491950460
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseSettingsParameterNames, "GetPulseSettingsParameterNames" }, // 2368052950
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetPulseTime, "GetPulseTime" }, // 3831152071
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetSettingsParameterNames, "GetSettingsParameterNames" }, // 2679861260
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkDistance, "GetShrinkDistance" }, // 1836102141
		{ &Z_Construct_UFunction_UGTProximityLightComponent_GetShrinkPercentage, "GetShrinkPercentage" }, // 3644935678
		{ &Z_Construct_UFunction_UGTProximityLightComponent_Pulse, "Pulse" }, // 3454035388
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 2407378993
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColor, "SetCenterColor" }, // 907273356
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetCenterColorParameterNames, "SetCenterColorParameterNames" }, // 2784569445
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetLocationParameterNames, "SetLocationParameterNames" }, // 449108182
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColor, "SetMiddleColor" }, // 4286062969
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetMiddleColorParameterNames, "SetMiddleColorParameterNames" }, // 600380230
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColor, "SetOuterColor" }, // 3733774968
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetOuterColorParameterNames, "SetOuterColorParameterNames" }, // 386460740
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetProjectedRadius, "SetProjectedRadius" }, // 3623339031
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetPulseSettingsParameterNames, "SetPulseSettingsParameterNames" }, // 3702663094
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetSettingsParameterNames, "SetSettingsParameterNames" }, // 2817093787
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkDistance, "SetShrinkDistance" }, // 2492933007
		{ &Z_Construct_UFunction_UGTProximityLightComponent_SetShrinkPercentage, "SetShrinkPercentage" }, // 2229606748
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * A proximity light is a Fluent Design System paradigm that acts as a surface projected gradient point light. For a material to be\n * influenced by a proximity light the ProximityLightContribution material function must be used within the material's shader graph.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTProximityLightComponent.h" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "A proximity light is a Fluent Design System paradigm that acts as a surface projected gradient point light. For a material to be\ninfluenced by a proximity light the ProximityLightContribution material function must be used within the material's shader graph." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData[] = {
		{ "BlueprintGetter", "GetProjectedRadius" },
		{ "BlueprintSetter", "SetProjectedRadius" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the radius of the ProximityLight effect when projected onto a surface. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the radius of the ProximityLight effect when projected onto a surface." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius = { "ProjectedRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ProjectedRadius), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "BlueprintGetter", "GetAttenuationRadius" },
		{ "BlueprintSetter", "SetAttenuationRadius" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the radius at which the ProximityLight effect is no longer visible. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the radius at which the ProximityLight effect is no longer visible." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData[] = {
		{ "BlueprintGetter", "GetShrinkDistance" },
		{ "BlueprintSetter", "SetShrinkDistance" },
		{ "Category", "Light" },
		{ "Comment", "/** Specifies the distance a ProximityLight must be from a surface (less than or equal to) to begin shrinking to the\n\x09(ProjectedRadius * ShrinkPercentage) radius. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Specifies the distance a ProximityLight must be from a surface (less than or equal to) to begin shrinking to the\n      (ProjectedRadius * ShrinkPercentage) radius." },
		{ "UIMax", "500.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance = { "ShrinkDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ShrinkDistance), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData[] = {
		{ "BlueprintGetter", "GetShrinkPercentage" },
		{ "BlueprintSetter", "SetShrinkPercentage" },
		{ "Category", "Light" },
		{ "Comment", "/** When a ProximityLight is closer to a surface than the ShrinkDistance, the smallest percentage of the ProjectedRadius it can\n\x09 * shrink to. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "When a ProximityLight is closer to a surface than the ShrinkDistance, the smallest percentage of the ProjectedRadius it can\nshrink to." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage = { "ShrinkPercentage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, ShrinkPercentage), METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData[] = {
		{ "BlueprintGetter", "GetCenterColor" },
		{ "BlueprintSetter", "SetCenterColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient at the center (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient at the center (RGB) and (A) is gradient extent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor = { "CenterColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, CenterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData[] = {
		{ "BlueprintGetter", "GetMiddleColor" },
		{ "BlueprintSetter", "SetMiddleColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient in between the center and outer color (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient in between the center and outer color (RGB) and (A) is gradient extent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor = { "MiddleColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, MiddleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData[] = {
		{ "BlueprintGetter", "GetOuterColor" },
		{ "BlueprintSetter", "SetOuterColor" },
		{ "Category", "Light" },
		{ "Comment", "/** The color of the ProximityLight gradient at the outer edge (RGB) and (A) is gradient extent. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "The color of the ProximityLight gradient at the outer edge (RGB) and (A) is gradient extent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor = { "OuterColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, OuterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_Inner = { "LocationParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetLocationParameterNames" },
		{ "BlueprintSetter", "SetLocationParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each location of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each location of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames = { "LocationParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, LocationParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_Inner = { "SettingsParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetSettingsParameterNames" },
		{ "BlueprintSetter", "SetSettingsParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each setting of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each setting of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames = { "SettingsParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, SettingsParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_Inner = { "PulseSettingsParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetPulseSettingsParameterNames" },
		{ "BlueprintSetter", "SetPulseSettingsParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each pulse setting of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each pulse setting of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames = { "PulseSettingsParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, PulseSettingsParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_Inner = { "CenterColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetCenterColorParameterNames" },
		{ "BlueprintSetter", "SetCenterColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each center color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each center color of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames = { "CenterColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, CenterColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_Inner = { "MiddleColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetMiddleColorParameterNames" },
		{ "BlueprintSetter", "SetMiddleColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each middle color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each middle color of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames = { "MiddleColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, MiddleColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_Inner = { "OuterColorParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData[] = {
		{ "BlueprintGetter", "GetOuterColorParameterNames" },
		{ "BlueprintSetter", "SetOuterColorParameterNames" },
		{ "Category", "Light" },
		{ "Comment", "/** Parameter name array used to represent each outer color of a ProximityLight to pass to a material. */" },
		{ "ModuleRelativePath", "Public/GTProximityLightComponent.h" },
		{ "ToolTip", "Parameter name array used to represent each outer color of a ProximityLight to pass to a material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames = { "OuterColorParameterNames", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTProximityLightComponent, OuterColorParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ProjectedRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_ShrinkPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_LocationParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_SettingsParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_PulseSettingsParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_CenterColorParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_MiddleColorParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTProximityLightComponent_Statics::NewProp_OuterColorParameterNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTProximityLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTProximityLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTProximityLightComponent_Statics::ClassParams = {
		&UGTProximityLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTProximityLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTProximityLightComponent()
	{
		if (!Z_Registration_Info_UClass_UGTProximityLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTProximityLightComponent.OuterSingleton, Z_Construct_UClass_UGTProximityLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTProximityLightComponent.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTProximityLightComponent>()
	{
		return UGTProximityLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTProximityLightComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTProximityLightComponent, UGTProximityLightComponent::StaticClass, TEXT("UGTProximityLightComponent"), &Z_Registration_Info_UClass_UGTProximityLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTProximityLightComponent), 2662321592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_631937876(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTProximityLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
