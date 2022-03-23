// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fntastic_TestGameMode.h"
#include "Fntastic_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFntastic_TestGameMode::AFntastic_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
