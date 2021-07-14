// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectKikGameMode.h"
#include "PlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectKikGameMode::AProjectKikGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
