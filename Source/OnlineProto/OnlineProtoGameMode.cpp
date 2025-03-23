// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlineProtoGameMode.h"
#include "OnlineProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnlineProtoGameMode::AOnlineProtoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/_OnlineProto/_Base/_Common/Character/Base/BP_BaseCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
