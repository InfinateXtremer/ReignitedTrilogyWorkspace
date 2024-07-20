#pragma once
#include "CoreMinimal.h"
#include "EPhasmidTeamId.generated.h"

UENUM(BlueprintType)
enum class EPhasmidTeamId : uint8 {
    TeamOne,
    TeamTwo,
    TeamThree,
    TeamFour,
    NoTeam = 0xFD,
    Neutral,
    ELostLamaTeamId_MAX UMETA(Hidden),
};

