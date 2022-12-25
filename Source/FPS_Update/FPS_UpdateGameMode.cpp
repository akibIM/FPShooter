// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_UpdateGameMode.h"
#include "FPS_UpdateHUD.h"
#include "FPS_UpdateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_UpdateGameMode::AFPS_UpdateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_UpdateHUD::StaticClass();
}
