// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddPlugInProject/CB_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_PlayerController() {}

// Begin Cross Module References
ADDPLUGINPROJECT_API UClass* Z_Construct_UClass_ACB_PlayerController();
ADDPLUGINPROJECT_API UClass* Z_Construct_UClass_ACB_PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_AddPlugInProject();
// End Cross Module References

// Begin Class ACB_PlayerController Function BeginPlay
struct Z_Construct_UFunction_ACB_PlayerController_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerController_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerController, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerController_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACB_PlayerController_BeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACB_PlayerController_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerController_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACB_PlayerController::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay();
	P_NATIVE_END;
}
// End Class ACB_PlayerController Function BeginPlay

// Begin Class ACB_PlayerController Function OnLevelChange
struct Z_Construct_UFunction_ACB_PlayerController_OnLevelChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACB_PlayerController_OnLevelChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACB_PlayerController, nullptr, "OnLevelChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACB_PlayerController_OnLevelChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACB_PlayerController_OnLevelChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACB_PlayerController_OnLevelChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACB_PlayerController_OnLevelChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACB_PlayerController::execOnLevelChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelChange();
	P_NATIVE_END;
}
// End Class ACB_PlayerController Function OnLevelChange

// Begin Class ACB_PlayerController
void ACB_PlayerController::StaticRegisterNativesACB_PlayerController()
{
	UClass* Class = ACB_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginPlay", &ACB_PlayerController::execBeginPlay },
		{ "OnLevelChange", &ACB_PlayerController::execOnLevelChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACB_PlayerController);
UClass* Z_Construct_UClass_ACB_PlayerController_NoRegister()
{
	return ACB_PlayerController::StaticClass();
}
struct Z_Construct_UClass_ACB_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CB_PlayerController.h" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_ChangeLevel_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_PrintUserName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CB_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_ChangeLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_PrintUserName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACB_PlayerController_BeginPlay, "BeginPlay" }, // 2973386765
		{ &Z_Construct_UFunction_ACB_PlayerController_OnLevelChange, "OnLevelChange" }, // 1108809966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACB_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_IA_ChangeLevel = { "IA_ChangeLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACB_PlayerController, IA_ChangeLevel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_ChangeLevel_MetaData), NewProp_IA_ChangeLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_IA_PrintUserName = { "IA_PrintUserName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACB_PlayerController, IA_PrintUserName), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_PrintUserName_MetaData), NewProp_IA_PrintUserName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACB_PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_IA_ChangeLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_IA_PrintUserName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACB_PlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACB_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AddPlugInProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACB_PlayerController_Statics::ClassParams = {
	&ACB_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACB_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACB_PlayerController()
{
	if (!Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton, Z_Construct_UClass_ACB_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACB_PlayerController.OuterSingleton;
}
template<> ADDPLUGINPROJECT_API UClass* StaticClass<ACB_PlayerController>()
{
	return ACB_PlayerController::StaticClass();
}
ACB_PlayerController::ACB_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACB_PlayerController);
ACB_PlayerController::~ACB_PlayerController() {}
// End Class ACB_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACB_PlayerController, ACB_PlayerController::StaticClass, TEXT("ACB_PlayerController"), &Z_Registration_Info_UClass_ACB_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACB_PlayerController), 1444748621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_96245497(TEXT("/Script/AddPlugInProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
