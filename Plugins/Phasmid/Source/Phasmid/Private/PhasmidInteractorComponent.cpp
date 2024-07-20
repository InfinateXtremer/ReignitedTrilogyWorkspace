#include "PhasmidInteractorComponent.h"

class AActor;
class UPhasmidInteractableComponent;

void UPhasmidInteractorComponent::RemoveInteractable(UPhasmidInteractableComponent* Interactable) {
}

void UPhasmidInteractorComponent::OnActorEndOverlap(AActor* MyOverlappedActor, AActor* OtherActor) {
}

void UPhasmidInteractorComponent::OnActorBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor) {
}

void UPhasmidInteractorComponent::InteractWith_Implementation(UPhasmidInteractableComponent* Interactable) {
}
bool UPhasmidInteractorComponent::InteractWith_Validate(UPhasmidInteractableComponent* Interactable) {
    return true;
}

void UPhasmidInteractorComponent::Interact() {
}

bool UPhasmidInteractorComponent::CanInteractWith_Implementation(UPhasmidInteractableComponent* Interactable) {
    return false;
}

bool UPhasmidInteractorComponent::CanInteract() {
    return false;
}

void UPhasmidInteractorComponent::AddInteractable(UPhasmidInteractableComponent* Interactable) {
}

UPhasmidInteractorComponent::UPhasmidInteractorComponent() {
}

