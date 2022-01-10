

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "FalconGameState.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconGameState : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum EFalconGameState
{
	MainMenu,
	LevelLoadingDirect,
	LevelLoadingPortal,
	InPlay,
	PausedMenu,
	InCutscene,
	Respawning,
	LevelUnloading
};