// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Private/Utils/UxtInternalFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInternalFunctionLibrary() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtFontCharacter();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtFontCharacter;
class UScriptStruct* FUxtFontCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtFontCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtFontCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtFontCharacter, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtFontCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_UxtFontCharacter.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtFontCharacter>()
{
	return FUxtFontCharacter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtFontCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint structure which contains data required to render a character within a offline font.\n */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Blueprint structure which contains data required to render a character within a offline font." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtFontCharacter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Uxt Font Character" },
		{ "Comment", "/**\n\x09 * The single font character as a string.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The single font character as a string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Uxt Font Character" },
		{ "Comment", "/**\n\x09 * The texutre containing the font character.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The texutre containing the font character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData[] = {
		{ "Category", "Uxt Font Character" },
		{ "Comment", "/**\n\x09 * The UV offset within the texture to find the character.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The UV offset within the texture to find the character." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform = { "UVTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, UVTransform), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Uxt Font Character" },
		{ "Comment", "/**\n\x09 * The normalized width and height of the character.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The normalized width and height of the character." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtFontCharacter",
		sizeof(FUxtFontCharacter),
		alignof(FUxtFontCharacter),
		Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtFontCharacter()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtFontCharacter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtFontCharacter.InnerSingleton, Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtFontCharacter.InnerSingleton;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execSlerp)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Slerp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UUxtInternalFunctionLibrary::Slerp(Z_Param_Out_Vector1,Z_Param_Out_Vector2,Z_Param_Slerp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execGetFontCharacterData)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_TARRAY_REF(FUxtFontCharacter,Z_Param_Out_FontCharacters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::GetFontCharacterData(Z_Param_Font,Z_Param_Out_FontCharacters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execIsFontOffline)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::IsFontOffline(Z_Param_Font);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execFStringToHexCodePoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::FStringToHexCodePoint(Z_Param_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execHexCodePointToFString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::HexCodePointToFString(Z_Param_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	void UUxtInternalFunctionLibrary::StaticRegisterNativesUUxtInternalFunctionLibrary()
	{
		UClass* Class = UUxtInternalFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FStringToHexCodePoint", &UUxtInternalFunctionLibrary::execFStringToHexCodePoint },
			{ "GetFontCharacterData", &UUxtInternalFunctionLibrary::execGetFontCharacterData },
			{ "HexCodePointToFString", &UUxtInternalFunctionLibrary::execHexCodePointToFString },
			{ "IsFontOffline", &UUxtInternalFunctionLibrary::execIsFontOffline },
			{ "Slerp", &UUxtInternalFunctionLibrary::execSlerp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics
	{
		struct UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms
		{
			FString Input;
			FString Output;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Output;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Output,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Internal" },
		{ "Comment", "/** Converts a UTF-16 FString into the corresponding unicode code point as hex representation. Returns true when the conversion is\n\x09 * successful.*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Converts a UTF-16 FString into the corresponding unicode code point as hex representation. Returns true when the conversion is\nsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "FStringToHexCodePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics
	{
		struct UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms
		{
			const UFont* Font;
			TArray<FUxtFontCharacter> FontCharacters;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontCharacters_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontCharacters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters_Inner = { "FontCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtFontCharacter, METADATA_PARAMS(nullptr, 0) }; // 2064305267
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters = { "FontCharacters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms, FontCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2064305267
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Internal" },
		{ "Comment", "/** Builds an array of FUxtFontCharacters for each character present in a UFont. */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Builds an array of FUxtFontCharacters for each character present in a UFont." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "GetFontCharacterData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics
	{
		struct UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms
		{
			FString Input;
			FString Output;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Output;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Output,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Internal" },
		{ "Comment", "/** Converts a Unicode code point as hex into the corresponding UTF-16 FString representation. Returns true when the conversion is\n\x09 * successful.*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Converts a Unicode code point as hex into the corresponding UTF-16 FString representation. Returns true when the conversion is\nsuccessful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "HexCodePointToFString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics
	{
		struct UxtInternalFunctionLibrary_eventIsFontOffline_Parms
		{
			const UFont* Font;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventIsFontOffline_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData)) };
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventIsFontOffline_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventIsFontOffline_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Internal" },
		{ "Comment", "/** Returns true if a UFont is using offline caching. */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Returns true if a UFont is using offline caching." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "IsFontOffline", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::UxtInternalFunctionLibrary_eventIsFontOffline_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics
	{
		struct UxtInternalFunctionLibrary_eventSlerp_Parms
		{
			FVector Vector1;
			FVector Vector2;
			float Slerp;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Slerp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector1 = { "Vector1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventSlerp_Parms, Vector1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventSlerp_Parms, Vector2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Slerp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Slerp = { "Slerp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventSlerp_Parms, Slerp), METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Slerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Slerp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventSlerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Vector2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_Slerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Internal" },
		{ "Comment", "/** Spherical linear interpolate between two vectors */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Spherical linear interpolate between two vectors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "Slerp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::UxtInternalFunctionLibrary_eventSlerp_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtInternalFunctionLibrary);
	UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary_NoRegister()
	{
		return UUxtInternalFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint, "FStringToHexCodePoint" }, // 1597813709
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData, "GetFontCharacterData" }, // 156524324
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString, "HexCodePointToFString" }, // 4172313646
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline, "IsFontOffline" }, // 1382380235
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_Slerp, "Slerp" }, // 2049130912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools|Internal" },
		{ "Comment", "/**\n * Library of utility internal functions for UX Tools.\n */" },
		{ "IncludePath", "Utils/UxtInternalFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Library of utility internal functions for UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInternalFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::ClassParams = {
		&UUxtInternalFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUxtInternalFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtInternalFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtInternalFunctionLibrary.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtInternalFunctionLibrary>()
	{
		return UUxtInternalFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInternalFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FUxtFontCharacter::StaticStruct, Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewStructOps, TEXT("UxtFontCharacter"), &Z_Registration_Info_UScriptStruct_UxtFontCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtFontCharacter), 2064305267U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtInternalFunctionLibrary, UUxtInternalFunctionLibrary::StaticClass, TEXT("UUxtInternalFunctionLibrary"), &Z_Registration_Info_UClass_UUxtInternalFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtInternalFunctionLibrary), 4271377295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_2704646288(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_Utils_UxtInternalFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
