#include "PhasmidInteractableComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;


void UPhasmidInteractableComponent::SetInteractable(bool Interactable) {
}

void UPhasmidInteractableComponent::OnRep_IsInteractable_Implementation() {
}

void UPhasmidInteractableComponent::Multicast_Interact_Implementation(AActor* Interactor) {
}

bool UPhasmidInteractableComponent::Interact(AActor* Interactor) {
    return false;
}


bool UPhasmidInteractableComponent::GetInteractableByActor_Implementation(AActor* Interactor) {
    return false;
}

bool UPhasmidInteractableComponent::GetInteractable_Implementation() {
    return false;
}

void UPhasmidInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidInteractableComponent, bIsInteractable);
}

UPhasmidInteractableComponent::UPhasmidInteractableComponent() {
    this->bIsInteractable = true;
    this->bRequiresLineOfSight = false;
    this->bRequiresCollision = true;
    this->bRequiresInput = true;
    this->LinkedSceneComponentTag = TEXT("Interactable");
    this->RequiredTeam = EPhasmidTeamId::Neutral;
}

