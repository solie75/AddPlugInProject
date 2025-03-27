// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CB_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADDPLUGINPROJECT_CB_GameInstance_generated_h
#error "CB_GameInstance.generated.h already included, missing '#pragma once' in CB_GameInstance.h"
#endif
#define ADDPLUGINPROJECT_CB_GameInstance_generated_h

#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeLevel); \
	DECLARE_FUNCTION(execInit);


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCB_GameInstance(); \
	friend struct Z_Construct_UClass_UCB_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UCB_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AddPlugInProject"), NO_API) \
	DECLARE_SERIALIZER(UCB_GameInstance)


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCB_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCB_GameInstance(UCB_GameInstance&&); \
	UCB_GameInstance(const UCB_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCB_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCB_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCB_GameInstance) \
	NO_API virtual ~UCB_GameInstance();


#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_12_PROLOG
#define FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADDPLUGINPROJECT_API UClass* StaticClass<class UCB_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
