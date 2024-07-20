#include "Agent9TopDown.h"

class AActor;
class UPrimitiveComponent;
class UQuestActionsComponent;

void AAgent9TopDown::Ticking_Implementation(UQuestActionsComponent* Actions) {
}

void AAgent9TopDown::SpawnerReady(AActor* spawner) {
}

void AAgent9TopDown::RegisterRoomTriggerOverlapBegin() {
}

void AAgent9TopDown::RegisterExitTriggerOverlapBegin() {
}

void AAgent9TopDown::PlayerFinishedWalking() {
}


void AAgent9TopDown::OnRoomTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AAgent9TopDown::OnExitTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AAgent9TopDown::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void AAgent9TopDown::ForgetEnemy(AActor* Enemy) {
}

void AAgent9TopDown::Completed_Implementation(UQuestActionsComponent* Actions) {
}

AAgent9TopDown::AAgent9TopDown() {
    this->EntryGate = NULL;
    this->ExitTrigger = NULL;
    this->IconName = TEXT("InVisible");
    this->ScoreUIClass = NULL;
    this->ScoreUIPosition = EFalconHudWidgetPosition::EFHP_LowerRight;
}

