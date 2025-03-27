// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_GameInstance.h"
#include "Kismet/GamePlayStatics.h"

void UCB_GameInstance::Init()
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::OpenLevel(World, TEXT("Level_1"));
	}
}

void UCB_GameInstance::ChangeLevel(FName _newLevelName)
{
	if (UWorld* World = GetWorld())
	{
		UGameplayStatics::OpenLevel(World, _newLevelName);
	}
}
