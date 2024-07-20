#include "KeyController.h"

class AActor;
class UQuestActionsComponent;

void AKeyController::ZapPlayer_Implementation(const FName& Checkpoint, UQuestActionsComponent* Actions) {
}

void AKeyController::RxPickup(AActor* Pickup, AActor* receiver, FName Type) {
}

void AKeyController::OutOfWorld_Implementation(UQuestActionsComponent* Actions) {
}

AKeyController::AKeyController() {
    this->MaterialOverride = NULL;
}

