// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronBuilderGameMode.h"
#include "PatronBuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

APatronBuilderGameMode::APatronBuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
