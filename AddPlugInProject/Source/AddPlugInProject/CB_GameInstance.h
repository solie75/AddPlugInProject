// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CB_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ADDPLUGINPROJECT_API UCB_GameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION()
	virtual void Init() override;

	UFUNCTION()
	void ChangeLevel(FName _newLevelName);
};
