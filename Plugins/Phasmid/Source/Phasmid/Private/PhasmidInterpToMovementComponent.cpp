#include "PhasmidInterpToMovementComponent.h"
#include "Net/UnrealNetwork.h"

bool UPhasmidInterpToMovementComponent::TryPushObstacle_Implementation(const FHitResult& Hit, float Time, FVector MoveDelta) {
    return false;
}

void UPhasmidInterpToMovementComponent::SyncCurrentTime(float ServerTime) {
}

void UPhasmidInterpToMovementComponent::SetSpeed(float Speed) {
}

void UPhasmidInterpToMovementComponent::OnRep_ReplicatedSplineTime() {
}

FVector UPhasmidInterpToMovementComponent::GetLastVelocity() {
    return FVector{};
}

float UPhasmidInterpToMovementComponent::GetCurrentTime() {
    return 0.0f;
}

void UPhasmidInterpToMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidInterpToMovementComponent, ReplicatedSplineTime);
}

UPhasmidInterpToMovementComponent::UPhasmidInterpToMovementComponent() {
    this->DoMovement = false;
    this->bPushObstacles = false;
    this->ReplicatedSplineTime = 0.00f;
}

