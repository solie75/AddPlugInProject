// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddPlugInProject/CB_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCB_GameInstance() {}

// Begin Cross Module References
ADDPLUGINPROJECT_API UClass* Z_Construct_UClass_UCB_GameInstance();
ADDPLUGINPROJECT_API UClass* Z_Construct_UClass_UCB_GameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_AddPlugInProject();
// End Cross Module References

// Begin Class UCB_GameInstance Function ChangeLevel
struct Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics
{
	struct CB_GameInstance_eventChangeLevel_Parms
	{
		FName _newLevelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp__newLevelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::NewProp__newLevelName = { "_newLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CB_GameInstance_eventChangeLevel_Parms, _newLevelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::NewProp__newLevelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCB_GameInstance, nullptr, "ChangeLevel", nullptr, nullptr, Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::CB_GameInstance_eventChangeLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::CB_GameInstance_eventChangeLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCB_GameInstance_ChangeLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCB_GameInstance_ChangeLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCB_GameInstance::execChangeLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param__newLevelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeLevel(Z_Param__newLevelName);
	P_NATIVE_END;
}
// End Class UCB_GameInstance Function ChangeLevel

// Begin Class UCB_GameInstance Function Init
struct Z_Construct_UFunction_UCB_GameInstance_Init_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CB_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCB_GameInstance_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCB_GameInstance, nullptr, "Init", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCB_GameInstance_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCB_GameInstance_Init_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCB_GameInstance_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCB_GameInstance_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCB_GameInstance::execInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init();
	P_NATIVE_END;
}
// End Class UCB_GameInstance Function Init

// Begin Class UCB_GameInstance
void UCB_GameInstance::StaticRegisterNativesUCB_GameInstance()
{
	UClass* Class = UCB_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeLevel", &UCB_GameInstance::execChangeLevel },
		{ "Init", &UCB_GameInstance::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCB_GameInstance);
UClass* Z_Construct_UClass_UCB_GameInstance_NoRegister()
{
	return UCB_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UCB_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CB_GameInstance.h" },
		{ "ModuleRelativePath", "CB_GameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCB_GameInstance_ChangeLevel, "ChangeLevel" }, // 2705015461
		{ &Z_Construct_UFunction_UCB_GameInstance_Init, "Init" }, // 3060435780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCB_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCB_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AddPlugInProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCB_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCB_GameInstance_Statics::ClassParams = {
	&UCB_GameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCB_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCB_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCB_GameInstance()
{
	if (!Z_Registration_Info_UClass_UCB_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCB_GameInstance.OuterSingleton, Z_Construct_UClass_UCB_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCB_GameInstance.OuterSingleton;
}
template<> ADDPLUGINPROJECT_API UClass* StaticClass<UCB_GameInstance>()
{
	return UCB_GameInstance::StaticClass();
}
UCB_GameInstance::UCB_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCB_GameInstance);
UCB_GameInstance::~UCB_GameInstance() {}
// End Class UCB_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCB_GameInstance, UCB_GameInstance::StaticClass, TEXT("UCB_GameInstance"), &Z_Registration_Info_UClass_UCB_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCB_GameInstance), 3857812415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_1192657894(TEXT("/Script/AddPlugInProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_AddPlugInProject_Source_AddPlugInProject_CB_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
