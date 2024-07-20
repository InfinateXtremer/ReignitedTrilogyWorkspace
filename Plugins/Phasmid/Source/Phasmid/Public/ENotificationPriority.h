#pragma once
#include "CoreMinimal.h"
#include "ENotificationPriority.generated.h"

UENUM(BlueprintType)
namespace ENotificationPriority {
    enum Type {
        NotificationPriority_Highest,
        NotificationPriority_Higher,
        NotificationPriority_High,
        NotificationPriority_Medium,
        NotificationPriority_Low,
        NotificationPriority_Lower,
        NotificationPriority_Lowest,
        NotificationPriority_MAX UMETA(Hidden),
    };
}

