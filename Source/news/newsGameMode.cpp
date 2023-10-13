// Copyright Epic Games, Inc. All Rights Reserved.

#include "newsGameMode.h"
#include "newsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AnewsGameMode::AnewsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
