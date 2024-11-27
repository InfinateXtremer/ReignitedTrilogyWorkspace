#include "BlutoController.h"

void ABlutoController::FireProjectile_Implementation() {
}

ABlutoController::ABlutoController(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)  // Pass ObjectInitializer to the base class constructor
{
    this->turnSpeed = 5.00f;
    this->MoveSpeed = 3.00f;
    this->missileCount = 0.00f;
}

