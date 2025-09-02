// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IceTask1GameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AIceTask1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AIceTask1GameMode();
};



