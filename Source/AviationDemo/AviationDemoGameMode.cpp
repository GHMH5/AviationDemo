// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AviationDemoGameMode.h"
#include "MyHelicopter.h"
#include "UObject/ConstructorHelpers.h"

AAviationDemoGameMode::AAviationDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/AviationDemoCPP/Blueprints/MyHelicopterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}


	static ConstructorHelpers::FClassFinder<AController> PlayerControllerBPClass(TEXT("/Game/AviationDemoCPP/Blueprints/MyHelicopterController"));
	if (PlayerControllerBPClass.Class != NULL)

	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
