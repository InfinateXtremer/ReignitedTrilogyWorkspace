#include "SpyroCharacter.h"
#include "FollowCameraComponent.h"

void ASpyroCharacter::StopCharge() {
}

void ASpyroCharacter::OnSetSkateboardState_Implementation(FName stateName) {
}


void ASpyroCharacter::DoFireAttack() {
}

void ASpyroCharacter::DoCharge() {
}

ASpyroCharacter::ASpyroCharacter() {
    this->FollowCamera = CreateDefaultSubobject<UFollowCameraComponent>(TEXT("FollowCamera"));
    this->bIsChargePressed = false;
    this->bDivingDisabledVolume = false;
    this->bDivingDisabledShallow = false;
}

