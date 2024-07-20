#include "GameplayNotificationDef.h"

FGameplayNotificationDef::FGameplayNotificationDef() {
    this->Priority = ENotificationPriority::NotificationPriority_Highest;
    this->MyType = ENotificationType::NotificationType_TeamMeter;
    this->AdditionalData = 0;
}

