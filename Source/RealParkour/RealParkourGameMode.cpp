// Copyright Epic Games, Inc. All Rights Reserved.

#include "RealParkourGameMode.h"
#include "RealParkourCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARealParkourGameMode::ARealParkourGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
