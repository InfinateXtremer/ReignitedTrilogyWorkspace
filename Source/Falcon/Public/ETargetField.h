#pragma once
#include "CoreMinimal.h"
#include "ETargetField.generated.h"

UENUM(BlueprintType)
enum class ETargetField : uint8 {
    None,
    BestRescue,
    Checkpoint,
    CurrentState,
    Eggs,
    Gems,
    MoveMode,
    NextState,
    Position,
    Rescued,
    Signal,
    Ticking,
    Trigger,
    Visibility,
    AllDiskFields,
    BossDefeated,
    GameAbilities,
    WorldVisited,
    Moneybags,
    SpawnerSlot,
    MaskFlags = 0x3F,
    NoPersistFlag,
    SemiPersistFlag = 0x80,
};

