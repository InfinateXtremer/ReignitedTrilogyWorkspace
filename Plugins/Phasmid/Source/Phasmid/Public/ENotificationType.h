#pragma once
#include "CoreMinimal.h"
#include "ENotificationType.generated.h"

UENUM(BlueprintType)
namespace ENotificationType {
    enum Type {
        NotificationType_TeamMeter,
        NotificationType_GeneralMessage,
        NotificationType_BonusGoal,
        NotificationType_ReviveMessage,
        NotificationType_MainObjective,
        NotificationType_MAX UMETA(Hidden),
    };
}

