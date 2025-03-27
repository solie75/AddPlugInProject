// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CB_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADDPLUGINPROJECT_CB_PlayerController_generated_h
#error "CB_PlayerController.generated.h already included, missing '#pragma once' in CB_PlayerController.h"
#endif
#define ADDPLUGINPROJECT_CB_PlayerController_generated_h

#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLevelChange); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACB_PlayerController(); \
	friend struct Z_Construct_UClass_ACB_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ACB_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AddPlugInProject"), NO_API) \
	DECLARE_SERIALIZER(ACB_PlayerController)


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACB_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACB_PlayerController(ACB_PlayerController&&); \
	ACB_PlayerController(const ACB_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACB_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACB_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACB_PlayerController) \
	NO_API virtual ~ACB_PlayerController();


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_13_PROLOG
#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADDPLUGINPROJECT_API UClass* StaticClass<class ACB_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
