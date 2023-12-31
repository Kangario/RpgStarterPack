// Copyright Epic Games, Inc. All Rights Reserved.

#include "Raganrog2GameMode.h"
#include "Raganrog2Character.h"
#include "UObject/ConstructorHelpers.h"

ARaganrog2GameMode::ARaganrog2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
