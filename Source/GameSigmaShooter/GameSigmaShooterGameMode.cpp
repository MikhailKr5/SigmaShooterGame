// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameSigmaShooterGameMode.h"
#include "GameSigmaShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameSigmaShooterGameMode::AGameSigmaShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
