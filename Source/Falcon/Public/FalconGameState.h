

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "FalconGameState.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconGameStateEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM(BlueprintType)
enum EFalconGameState {
	MainMenu = 0,
	LevelLoadingDirect = 1,
	LevelLoadingPortal = 2,
	InPlay = 3,
	PausedMenu = 4,
	InCutscene = 5,
	Respawning = 6,
	LevelUnloading = 7,
};