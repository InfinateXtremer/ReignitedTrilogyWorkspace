#include "AchievementComponent.h"

class UFalconSaveGame;

void UAchievementComponent::SetPresence(EPresence presence) {
}

void UAchievementComponent::SetAchievementCompletion(EAchievement achievement, float completionAmount) {
}

void UAchievementComponent::OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap) {
}

void UAchievementComponent::OnSetCurrentUser() {
}

void UAchievementComponent::OnChangeSaveGame(UFalconSaveGame* incomingSaveGame) {
}

EPresence UAchievementComponent::GetPresence() const {
    return EPresence::EP_MainMenu;
}

UAchievementComponent::UAchievementComponent() {
    this->achievementPrefix = TEXT("TROPHY");
}

