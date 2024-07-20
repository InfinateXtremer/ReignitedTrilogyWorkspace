#include "QuestController.h"
#include "QuestActionsComponent.h"

class AActor;
class AQuestLevelActor;
class UFalconEnemyStateComponent;
class UWatchPlayerComponent;

void AQuestController::SetControllerTickEnabled(bool Tick) {
}

bool AQuestController::SendSignal(const FName& Value) {
    return false;
}



void AQuestController::OnSP3DeathStart(AActor* Actor) {
}

void AQuestController::OnSP3DeathEnd(AActor* Actor) {
}

void AQuestController::OnPlayerSeen(UWatchPlayerComponent* Watcher, bool canSee) {
}

void AQuestController::OnDestroy(AActor* Actor) {
}

void AQuestController::OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent) {
}

void AQuestController::HideOrDestroyActor() {
}

AQuestLevelActor* AQuestController::GetLevelActor() const {
    return NULL;
}

AActor* AQuestController::GetActorAbsolute() const {
    return NULL;
}

AActor* AQuestController::GetActor() {
    return NULL;
}


bool AQuestController::ActorExists() {
    return false;
}

AQuestController::AQuestController() {
    this->QuestActions = CreateDefaultSubobject<UQuestActionsComponent>(TEXT("Actions"));
    this->EggRequirement = -1;
    this->GemRequirement = -1;
    this->bAllowNullActor = false;
    this->m_levelActor = NULL;
}

