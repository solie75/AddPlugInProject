// Copyright Epic Games, Inc. All Rights Reserved.

#include "ManageUserNamePlugInBPLibrary.h"
#include "ManageUserNamePlugIn.h"

FString UManageUserNamePlugInBPLibrary::UserName = TEXT("Unknown");

UManageUserNamePlugInBPLibrary::UManageUserNamePlugInBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UManageUserNamePlugInBPLibrary::ManageUserNamePlugInSampleFunction(float Param)
{
	return -1;
}

void UManageUserNamePlugInBPLibrary::SetUserName(const FString& NewName)
{
    UserName = NewName;
    UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *UserName);
}

FString UManageUserNamePlugInBPLibrary::GetUserName()
{
    return UserName;
}