// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
struct FUxtButtonBrush;
struct FUxtTextBrush;
struct FUxtIconBrush;
#ifdef UXTOOLS_UxtPressableButtonActor_generated_h
#error "UxtPressableButtonActor.generated.h already included, missing '#pragma once' in UxtPressableButtonActor.h"
#endif
#define UXTOOLS_UxtPressableButtonActor_generated_h

#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonDisabled); \
	DECLARE_FUNCTION(execOnButtonEnabled); \
	DECLARE_FUNCTION(execOnBeginFocus); \
	DECLARE_FUNCTION(execOnButtonReleased); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execSetButtonBrush); \
	DECLARE_FUNCTION(execGetButtonBrush); \
	DECLARE_FUNCTION(execSetLabelTextBrush); \
	DECLARE_FUNCTION(execGetLabelTextBrush); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetIconBrush); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execSetIsPlated); \
	DECLARE_FUNCTION(execIsPlated); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetMillimeterSize); \
	DECLARE_FUNCTION(execGetMillimeterSize); \
	DECLARE_FUNCTION(execIsPulsing); \
	DECLARE_FUNCTION(execBeginPulse); \
	DECLARE_FUNCTION(execConstructLabel); \
	DECLARE_FUNCTION(execConstructIcon); \
	DECLARE_FUNCTION(execConstructVisuals);


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonDisabled); \
	DECLARE_FUNCTION(execOnButtonEnabled); \
	DECLARE_FUNCTION(execOnBeginFocus); \
	DECLARE_FUNCTION(execOnButtonReleased); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execSetButtonBrush); \
	DECLARE_FUNCTION(execGetButtonBrush); \
	DECLARE_FUNCTION(execSetLabelTextBrush); \
	DECLARE_FUNCTION(execGetLabelTextBrush); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execGetLabel); \
	DECLARE_FUNCTION(execSetIconBrush); \
	DECLARE_FUNCTION(execGetIconBrush); \
	DECLARE_FUNCTION(execSetIsPlated); \
	DECLARE_FUNCTION(execIsPlated); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetMillimeterSize); \
	DECLARE_FUNCTION(execGetMillimeterSize); \
	DECLARE_FUNCTION(execIsPulsing); \
	DECLARE_FUNCTION(execBeginPulse); \
	DECLARE_FUNCTION(execConstructLabel); \
	DECLARE_FUNCTION(execConstructIcon); \
	DECLARE_FUNCTION(execConstructVisuals);


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtPressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableButtonActor, AUxtBasePressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableButtonActor)


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAUxtPressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtPressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPressableButtonActor, AUxtBasePressableButtonActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPressableButtonActor)


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtPressableButtonActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtPressableButtonActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableButtonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableButtonActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableButtonActor(AUxtPressableButtonActor&&); \
	NO_API AUxtPressableButtonActor(const AUxtPressableButtonActor&); \
public:


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPressableButtonActor(AUxtPressableButtonActor&&); \
	NO_API AUxtPressableButtonActor(const AUxtPressableButtonActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPressableButtonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPressableButtonActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUxtPressableButtonActor)


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_25_PROLOG
#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_RPC_WRAPPERS \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_INCLASS \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtPressableButtonActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
