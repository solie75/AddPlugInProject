// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManageUserNamePlugInBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANAGEUSERNAMEPLUGIN_ManageUserNamePlugInBPLibrary_generated_h
#error "ManageUserNamePlugInBPLibrary.generated.h already included, missing '#pragma once' in ManageUserNamePlugInBPLibrary.h"
#endif
#define MANAGEUSERNAMEPLUGIN_ManageUserNamePlugInBPLibrary_generated_h

#define FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUserName); \
	DECLARE_FUNCTION(execSetUserName); \
	DECLARE_FUNCTION(execManageUserNamePlugInSampleFunction);


#define FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUManageUserNamePlugInBPLibrary(); \
	friend struct Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UManageUserNamePlugInBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ManageUserNamePlugIn"), NO_API) \
	DECLARE_SERIALIZER(UManageUserNamePlugInBPLibrary)


#define FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManageUserNamePlugInBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManageUserNamePlugInBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManageUserNamePlugInBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManageUserNamePlugInBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UManageUserNamePlugInBPLibrary(UManageUserNamePlugInBPLibrary&&); \
	UManageUserNamePlugInBPLibrary(const UManageUserNamePlugInBPLibrary&); \
public: \
	NO_API virtual ~UManageUserNamePlugInBPLibrary();


#define FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_25_PROLOG
#define FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_RPC_WRAPPERS \
	FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_INCLASS \
	FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANAGEUSERNAMEPLUGIN_API UClass* StaticClass<class UManageUserNamePlugInBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
