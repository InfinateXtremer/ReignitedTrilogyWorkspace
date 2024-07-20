#pragma once
#include "CoreMinimal.h"
#include "EPatrolType.generated.h"

UENUM(BlueprintType)
enum class EPatrolType : uint8 {
    PT_Looping,
    PT_BackAndForth,
    PT_MAX UMETA(Hidden),
};

