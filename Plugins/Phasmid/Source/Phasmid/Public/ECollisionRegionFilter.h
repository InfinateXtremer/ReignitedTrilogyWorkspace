#pragma once
#include "CoreMinimal.h"
#include "ECollisionRegionFilter.generated.h"

UENUM(BlueprintType)
enum class ECollisionRegionFilter : uint8 {
    OtherTeamOnly,
    MyTeamOnly,
    AllTeams,
};

