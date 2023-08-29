// Copyright Epic Games, Inc. All Rights Reserved.

#include "ARayOfHopeGameMode.h"
#include "ARayOfHopeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AARayOfHopeGameMode::AARayOfHopeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
