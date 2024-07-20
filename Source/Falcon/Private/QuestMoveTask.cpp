#include "QuestMoveTask.h"

class AActor;
class APawn;
class AQuestStrikePoint;

AQuestStrikePoint* UQuestMoveTask::StrikePoint() const {
    return NULL;
}

void UQuestMoveTask::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

APawn* UQuestMoveTask::Mover() const {
    return NULL;
}

void UQuestMoveTask::DelayArrival() {
}

void UQuestMoveTask::Arrived() {
}

UQuestMoveTask::UQuestMoveTask() {
    this->m_strike = NULL;
}

