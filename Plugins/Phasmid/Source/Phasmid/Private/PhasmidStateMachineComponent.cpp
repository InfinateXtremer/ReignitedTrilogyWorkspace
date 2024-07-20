#include "PhasmidStateMachineComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AController;
class UPhasmidStateComponent;
class UPrimitiveComponent;

void UPhasmidStateMachineComponent::SetNextStateByName(FName stateName, AActor* TriggeringActor, AController* TriggeringController) {
}

void UPhasmidStateMachineComponent::SetLastPlayerOverlapped(AActor* Actor) {
}

bool UPhasmidStateMachineComponent::SetCurrentStateByName(FName stateName, AActor* TriggeringActor, AController* TriggeringController, bool bReplicate) {
    return false;
}

bool UPhasmidStateMachineComponent::SetCurrentState(UPhasmidStateComponent* State, AActor* TriggeringActor, AController* TriggeringController, bool bReplicate) {
    return false;
}

void UPhasmidStateMachineComponent::OnStateChange(UPhasmidStateComponent* OldState, UPhasmidStateComponent* NextState, AActor* TriggeringActor, AController* TriggeringController) {
}

void UPhasmidStateMachineComponent::OnRep_CurrentState() {
}

void UPhasmidStateMachineComponent::OnRep_CurrentGlobalState() {
}

void UPhasmidStateMachineComponent::OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, UPrimitiveComponent* HitComponent, AActor* AttackingActor, AController* Instigator) {
}

AController* UPhasmidStateMachineComponent::GetPreviousTriggeringController() {
    return NULL;
}

AActor* UPhasmidStateMachineComponent::GetPreviousTriggeringActor() {
    return NULL;
}

UPhasmidStateComponent* UPhasmidStateMachineComponent::GetPrevioustate() {
    return NULL;
}

AActor* UPhasmidStateMachineComponent::GetLastPlayerOverlapped() {
    return NULL;
}

UPhasmidStateComponent* UPhasmidStateMachineComponent::GetCurrentState() {
    return NULL;
}

void UPhasmidStateMachineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidStateMachineComponent, LastPlayerOverlapped);
    DOREPLIFETIME(UPhasmidStateMachineComponent, ReplicatedState);
    DOREPLIFETIME(UPhasmidStateMachineComponent, GlobalState);
}

UPhasmidStateMachineComponent::UPhasmidStateMachineComponent() {
    this->bDebugPrintStateChanges = false;
    this->CurrentState = NULL;
    this->PreviousState = NULL;
}

