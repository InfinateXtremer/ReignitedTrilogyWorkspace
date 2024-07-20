#include "DragonSineMovementComponent.h"

class AActor;

void UDragonSineMovementComponent::MoveUpdate(float DeltaTime, AActor* Previous) {
}

UDragonSineMovementComponent::UDragonSineMovementComponent() {
    this->PrevActor = NULL;
    this->bAlive = false;
    this->RotationZDelta = 0.00f;
    this->SinePhase = 0.00f;
    this->SineAmplitude = 0.00f;
    this->SineFrequency = 0.00f;
}

