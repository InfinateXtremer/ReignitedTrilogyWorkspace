#include "QuestChallengeTask.h"

float UQuestChallengeTask::RemainingSeconds() const {
    return 0.0f;
}

bool UQuestChallengeTask::IsTicking() const {
    return false;
}

int32 UQuestChallengeTask::GetCurrentScore() const {
    return 0;
}

void UQuestChallengeTask::EndTheTimer() {
}

float UQuestChallengeTask::ElapsedSeconds() const {
    return 0.0f;
}

UQuestChallengeTask::UQuestChallengeTask() {
}

