#include "ButtonController.h"

class AActor;
class UQuestActionsComponent;

void AButtonController::Untriggerable_Implementation(UQuestActionsComponent* Actions) {
}

void AButtonController::Triggerable_Implementation(UQuestActionsComponent* Actions) {
}

int32 AButtonController::ToggleButton() {
    return 0;
}

void AButtonController::OnTakeDamage(AActor* Actor, const FGameplayEventData Data) {
}


void AButtonController::OnActorBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor) {
}

AButtonController::AButtonController() {
    this->TriggersOnDamageTaken = true;
    this->RequiresActivateSignal = false;
}

