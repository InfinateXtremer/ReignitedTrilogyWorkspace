#include "SP3_ProjLauncherComponent.h"

class USceneComponent;

void USP3_ProjLauncherComponent::SetTarget(USceneComponent* Target) {
}

void USP3_ProjLauncherComponent::SetInput(bool Fire) {
}

USceneComponent* USP3_ProjLauncherComponent::GetTarget() const {
    return NULL;
}

FName USP3_ProjLauncherComponent::GetStateName() const {
    return NAME_None;
}

int32 USP3_ProjLauncherComponent::GetNumAmmo() const {
    return 0;
}

int32 USP3_ProjLauncherComponent::GetMaxAmmo() const {
    return 0;
}

FTransform USP3_ProjLauncherComponent::GetBarrelTransform() const {
    return FTransform{};
}

USceneComponent* USP3_ProjLauncherComponent::GetBarrel() const {
    return NULL;
}

USP3_ProjLauncherComponent::USP3_ProjLauncherComponent() {
    this->HoldClass = NULL;
    this->ProjClass = NULL;
    this->ReticleClass = NULL;
    this->UIAmmoClass = NULL;
    this->Automatic = true;
    this->AutoAim = false;
}

