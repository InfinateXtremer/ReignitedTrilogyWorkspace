#pragma once
#include "CoreMinimal.h"
#include "EFalconGameState.generated.h"

UENUM(BlueprintType)
enum class EFalconGameState : uint8 {
    MainMenu,
    LevelLoadingDirect,
    LevelLoadingPortal,
    InPlay,
    PausedMenu,
    InCutscene,
    Respawning,
    LevelUnloading,
};

