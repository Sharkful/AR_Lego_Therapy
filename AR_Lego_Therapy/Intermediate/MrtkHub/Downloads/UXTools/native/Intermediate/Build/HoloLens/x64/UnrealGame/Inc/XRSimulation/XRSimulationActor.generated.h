// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UXRSimulationHeadMovementComponent;
class UObject;
enum class EControllerHand : uint8;
#ifdef XRSIMULATION_XRSimulationActor_generated_h
#error "XRSimulationActor.generated.h already included, missing '#pragma once' in XRSimulationActor.h"
#endif
#define XRSIMULATION_XRSimulationActor_generated_h

#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_SPARSE_DATA
#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRightHand); \
	DECLARE_FUNCTION(execGetLeftHand); \
	DECLARE_FUNCTION(execGetHeadMovement); \
	DECLARE_FUNCTION(execGetTargetHandPose);


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRightHand); \
	DECLARE_FUNCTION(execGetLeftHand); \
	DECLARE_FUNCTION(execGetHeadMovement); \
	DECLARE_FUNCTION(execGetTargetHandPose);


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRSimulationActor(); \
	friend struct Z_Construct_UClass_AXRSimulationActor_Statics; \
public: \
	DECLARE_CLASS(AXRSimulationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRSimulation"), NO_API) \
	DECLARE_SERIALIZER(AXRSimulationActor)


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAXRSimulationActor(); \
	friend struct Z_Construct_UClass_AXRSimulationActor_Statics; \
public: \
	DECLARE_CLASS(AXRSimulationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRSimulation"), NO_API) \
	DECLARE_SERIALIZER(AXRSimulationActor)


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXRSimulationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRSimulationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRSimulationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRSimulationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXRSimulationActor(AXRSimulationActor&&); \
	NO_API AXRSimulationActor(const AXRSimulationActor&); \
public:


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXRSimulationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXRSimulationActor(AXRSimulationActor&&); \
	NO_API AXRSimulationActor(const AXRSimulationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRSimulationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRSimulationActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRSimulationActor)


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_18_PROLOG
#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_SPARSE_DATA \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_RPC_WRAPPERS \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_INCLASS \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_SPARSE_DATA \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class XRSimulationActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRSIMULATION_API UClass* StaticClass<class AXRSimulationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UXTools_Source_XRSimulation_Public_XRSimulationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
