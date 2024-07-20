#include "QuestLevelManager.h"

class AActor;
class AQuestLevelActor;

void UQuestLevelManager::OnUndeservedEggsChange(int32 extraEggs) {
}

void UQuestLevelManager::OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap) {
}

void UQuestLevelManager::OnPlayerReady() {
}

void UQuestLevelManager::OnPlayerDied(AActor* Actor, const FGameplayEventData Payload) {
}

void UQuestLevelManager::OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState) {
}

AQuestLevelActor* UQuestLevelManager::GetQuestLevelByName(const FString& Level) {
    return NULL;
}

AQuestLevelActor* UQuestLevelManager::GetActiveQuestLevel() {
    return NULL;
}

UQuestLevelManager::UQuestLevelManager() {
    this->m_forceCheckpoint = NULL;
    this->m_customTeleport = NULL;
}

