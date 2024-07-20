#pragma once
#include "CoreMinimal.h"
#include "EPlayerVisibility.generated.h"

UENUM()
enum class EPlayerVisibility : int32 {
    DoesntSee,
    CanSee,
    Indeterminate,
};

