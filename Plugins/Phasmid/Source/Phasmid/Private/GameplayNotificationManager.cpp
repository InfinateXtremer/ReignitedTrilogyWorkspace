#include "GameplayNotificationManager.h"

void UGameplayNotificationManager::RemoveNotification(const FGameplayNotificationDef& Def) {
}

void UGameplayNotificationManager::QueueNotification(const FGameplayNotificationDef& Def) {
}

bool UGameplayNotificationManager::HasNextNotification() {
    return false;
}

int32 UGameplayNotificationManager::GetQueuedNotificationCount() {
    return 0;
}

void UGameplayNotificationManager::GetNextNotification(FGameplayNotificationDef& Def) {
}

bool UGameplayNotificationManager::compareNotificationDefs(const FGameplayNotificationDef& A, const FGameplayNotificationDef& B) {
    return false;
}


UGameplayNotificationManager::UGameplayNotificationManager() : UUserWidget(FObjectInitializer::Get()) {
}

