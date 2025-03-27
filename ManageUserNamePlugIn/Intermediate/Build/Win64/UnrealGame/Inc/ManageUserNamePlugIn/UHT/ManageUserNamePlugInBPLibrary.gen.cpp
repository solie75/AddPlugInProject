// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManageUserNamePlugIn/Public/ManageUserNamePlugInBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManageUserNamePlugInBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MANAGEUSERNAMEPLUGIN_API UClass* Z_Construct_UClass_UManageUserNamePlugInBPLibrary();
MANAGEUSERNAMEPLUGIN_API UClass* Z_Construct_UClass_UManageUserNamePlugInBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_ManageUserNamePlugIn();
// End Cross Module References

// Begin Class UManageUserNamePlugInBPLibrary Function GetUserName
struct Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics
{
	struct ManageUserNamePlugInBPLibrary_eventGetUserName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ManageUserNamePlugInTesting" },
		{ "DisplayName", "GetUserName_PlugIn" },
		{ "ModuleRelativePath", "Public/ManageUserNamePlugInBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManageUserNamePlugInBPLibrary_eventGetUserName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManageUserNamePlugInBPLibrary, nullptr, "GetUserName", nullptr, nullptr, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::ManageUserNamePlugInBPLibrary_eventGetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::ManageUserNamePlugInBPLibrary_eventGetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManageUserNamePlugInBPLibrary::execGetUserName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UManageUserNamePlugInBPLibrary::GetUserName();
	P_NATIVE_END;
}
// End Class UManageUserNamePlugInBPLibrary Function GetUserName

// Begin Class UManageUserNamePlugInBPLibrary Function ManageUserNamePlugInSampleFunction
struct Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics
{
	struct ManageUserNamePlugInBPLibrary_eventManageUserNamePlugInSampleFunction_Parms
	{
		float Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ManageUserNamePlugInTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "ManageUserNamePlugIn sample test testing" },
		{ "ModuleRelativePath", "Public/ManageUserNamePlugInBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManageUserNamePlugInBPLibrary_eventManageUserNamePlugInSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManageUserNamePlugInBPLibrary_eventManageUserNamePlugInSampleFunction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManageUserNamePlugInBPLibrary, nullptr, "ManageUserNamePlugInSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::ManageUserNamePlugInBPLibrary_eventManageUserNamePlugInSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::ManageUserNamePlugInBPLibrary_eventManageUserNamePlugInSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManageUserNamePlugInBPLibrary::execManageUserNamePlugInSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UManageUserNamePlugInBPLibrary::ManageUserNamePlugInSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UManageUserNamePlugInBPLibrary Function ManageUserNamePlugInSampleFunction

// Begin Class UManageUserNamePlugInBPLibrary Function SetUserName
struct Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics
{
	struct ManageUserNamePlugInBPLibrary_eventSetUserName_Parms
	{
		FString _newName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ManageUserNamePlugInTesting" },
		{ "DisplayName", "SetUserName_PlugIn" },
		{ "ModuleRelativePath", "Public/ManageUserNamePlugInBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__newName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__newName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::NewProp__newName = { "_newName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManageUserNamePlugInBPLibrary_eventSetUserName_Parms, _newName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__newName_MetaData), NewProp__newName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::NewProp__newName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManageUserNamePlugInBPLibrary, nullptr, "SetUserName", nullptr, nullptr, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::ManageUserNamePlugInBPLibrary_eventSetUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::ManageUserNamePlugInBPLibrary_eventSetUserName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManageUserNamePlugInBPLibrary::execSetUserName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__newName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UManageUserNamePlugInBPLibrary::SetUserName(Z_Param__newName);
	P_NATIVE_END;
}
// End Class UManageUserNamePlugInBPLibrary Function SetUserName

// Begin Class UManageUserNamePlugInBPLibrary
void UManageUserNamePlugInBPLibrary::StaticRegisterNativesUManageUserNamePlugInBPLibrary()
{
	UClass* Class = UManageUserNamePlugInBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserName", &UManageUserNamePlugInBPLibrary::execGetUserName },
		{ "ManageUserNamePlugInSampleFunction", &UManageUserNamePlugInBPLibrary::execManageUserNamePlugInSampleFunction },
		{ "SetUserName", &UManageUserNamePlugInBPLibrary::execSetUserName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManageUserNamePlugInBPLibrary);
UClass* Z_Construct_UClass_UManageUserNamePlugInBPLibrary_NoRegister()
{
	return UManageUserNamePlugInBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ManageUserNamePlugInBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ManageUserNamePlugInBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_GetUserName, "GetUserName" }, // 3587129723
		{ &Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_ManageUserNamePlugInSampleFunction, "ManageUserNamePlugInSampleFunction" }, // 2815669332
		{ &Z_Construct_UFunction_UManageUserNamePlugInBPLibrary_SetUserName, "SetUserName" }, // 82656634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManageUserNamePlugInBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ManageUserNamePlugIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::ClassParams = {
	&UManageUserNamePlugInBPLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManageUserNamePlugInBPLibrary()
{
	if (!Z_Registration_Info_UClass_UManageUserNamePlugInBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManageUserNamePlugInBPLibrary.OuterSingleton, Z_Construct_UClass_UManageUserNamePlugInBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManageUserNamePlugInBPLibrary.OuterSingleton;
}
template<> MANAGEUSERNAMEPLUGIN_API UClass* StaticClass<UManageUserNamePlugInBPLibrary>()
{
	return UManageUserNamePlugInBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManageUserNamePlugInBPLibrary);
UManageUserNamePlugInBPLibrary::~UManageUserNamePlugInBPLibrary() {}
// End Class UManageUserNamePlugInBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManageUserNamePlugInBPLibrary, UManageUserNamePlugInBPLibrary::StaticClass, TEXT("UManageUserNamePlugInBPLibrary"), &Z_Registration_Info_UClass_UManageUserNamePlugInBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManageUserNamePlugInBPLibrary), 4148540992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_2499593695(TEXT("/Script/ManageUserNamePlugIn"),
	Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_AddPlugInProject_ManageUserNamePlugIn_HostProject_Plugins_ManageUserNamePlugIn_Source_ManageUserNamePlugIn_Public_ManageUserNamePlugInBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
