#pragma once
#include "CoreMinimal.h"
#include "ESkateBoardRaceType.generated.h"

UENUM(BlueprintType)
enum class ESkateBoardRaceType : uint8 {
    None,
    RhynocRace,
    CrabRace,
    TimedRace,
};

