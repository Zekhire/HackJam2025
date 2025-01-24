// Copyright Epic Games, Inc. All Rights Reserved.

#include "HackJam2025GameMode.h"
#include "HackJam2025Character.h"
#include "UObject/ConstructorHelpers.h"

AHackJam2025GameMode::AHackJam2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
