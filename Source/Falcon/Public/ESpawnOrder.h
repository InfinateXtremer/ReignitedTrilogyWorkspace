#pragma once
#include "CoreMinimal.h"
#include "ESpawnOrder.generated.h"

UENUM(BlueprintType)
enum class ESpawnOrder : uint8 {
    Sequential,
    Random,
};

