// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlockBoltVoxelGameMode.h"
#include "BlockBoltVoxelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABlockBoltVoxelGameMode::ABlockBoltVoxelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
