#include "QuestOverlapTask.h"

class AActor;

void UQuestOverlapTask::Waited(AActor* OverlappedActor, AActor* OtherActor) {
}

UQuestOverlapTask::UQuestOverlapTask() {
    this->m_overlapSource = NULL;
}

