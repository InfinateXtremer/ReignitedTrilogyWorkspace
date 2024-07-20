#include "PhasmidStateComponent.h"

class AActor;
class AController;

void UPhasmidStateComponent::SetNextState(FName NextStateName, AActor* TriggeringActor, AController* TriggeringController) {
}






bool UPhasmidStateComponent::GetTriggeredState(FName& Name, AActor*& TriggeringActor, AController*& TriggeringController, bool& bReplicateTrigger) {
    return false;
}

UPhasmidStateComponent::UPhasmidStateComponent() {
    this->bCanEnterFromSelf = false;
}

