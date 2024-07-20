#include "PhasmidCullComponent.h"

class AActor;
class UMeshComponent;

void UPhasmidCullComponent::UnbindFromCull(AActor* EventOwner) {
}

void UPhasmidCullComponent::SetGameStateCullReady(bool bReady) {
}

void UPhasmidCullComponent::SetCullDistance(float NewCullDistance) {
}

void UPhasmidCullComponent::SetAutoUpdateCull(bool bNewEnabled) {
}

void UPhasmidCullComponent::SetActorEnabled(bool bNewEnabled) {
}

bool UPhasmidCullComponent::IsCulled() {
    return false;
}

bool UPhasmidCullComponent::IsActorCulled() const {
    return false;
}

bool UPhasmidCullComponent::GetOffScreen() const {
    return false;
}

bool UPhasmidCullComponent::GetMeshOffScreen(UMeshComponent* MeshComponent) const {
    return false;
}

bool UPhasmidCullComponent::GetGameStateCullReady() {
    return false;
}

void UPhasmidCullComponent::CheckCull() {
}

void UPhasmidCullComponent::BindToCull(AActor* EventOwner, const UPhasmidCullComponent::FCullEventDelegate& Event) {
}

UPhasmidCullComponent::UPhasmidCullComponent() {
    this->CullDistance = 1700.00f;
    this->CullDistanceSquared = 3000000.00f;
    this->CullCheckTime = 0.20f;
    this->bCanActorBeDisabled = true;
    this->bCanActorBeDisabledByVolume = true;
    this->bCanActorBeZKilled = true;
    this->bIgnoreZDistance = false;
    this->ReducedMoveInterval = 0.00f;
    this->bUseCamAngle = false;
    this->bAutoCull = true;
    this->bStillAutoCullWhenVolumeControlled = false;
    this->bEnableCollisionCulling = false;
    this->CollisionCullDistance = 800.00f;
}

