// Fill out your copyright notice in the Description page of Project Settings.


#include "CB_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "CB_GameInstance.h"

void ACB_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	if (UEnhancedInputComponent* EnhancedInput = FindComponentByClass<UEnhancedInputComponent>())
	{
		EnhancedInput->BindAction(
			this->IA_ChangeLevel,
			ETriggerEvent::Triggered,
			this,
			&ACB_PlayerController::OnLevelChange
		);

		/*EnhancedInput->BindAction(
			this->IA_PrintUserName,
			ETriggerEvent::Triggered,
			this,
			&ACB_PlayerController::OnPrintUserName
		);*/
	}
}

void ACB_PlayerController::OnLevelChange()
{
	UCB_GameInstance* GameInstance = Cast<UCB_GameInstance>(GetGameInstance());
	GameInstance->ChangeLevel(TEXT("Level_2"));
}

//void ACB_PlayerController::OnPrintUserName()
//{
//	//UCB_GameInstance* GameInstance = Cast<UCB_GameInstance>(GetGameInstance());
//}
