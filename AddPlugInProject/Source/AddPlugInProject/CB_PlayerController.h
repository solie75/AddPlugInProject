// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CB_PlayerController.generated.h"


class UInputAction;
class UInputMappingContext;

UCLASS()
class ADDPLUGINPROJECT_API ACB_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* IA_ChangeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* IA_PrintUserName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

public:
	UFUNCTION()
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnLevelChange();

	/*UFUNCTION(BlueprintNativeEvent, Category = "Input")
	void OnPrintUserName();*/
};
