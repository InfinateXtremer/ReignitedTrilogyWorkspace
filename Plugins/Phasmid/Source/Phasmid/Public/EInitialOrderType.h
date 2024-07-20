#pragma once
#include "CoreMinimal.h"
#include "EInitialOrderType.generated.h"

UENUM(BlueprintType)
enum class EInitialOrderType : uint8 {
    EIO_Idle,
    EIO_Alerted,
    EIO_Sniper,
    EIO_Patrol,
    EIO_Defend,
    EIO_MoveTo,
    EIO_AttackTarget,
    EIO_MAX UMETA(Hidden),
};

