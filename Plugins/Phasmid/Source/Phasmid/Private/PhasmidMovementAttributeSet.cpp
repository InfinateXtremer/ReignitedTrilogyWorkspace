#include "PhasmidMovementAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UPhasmidMovementAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPhasmidMovementAttributeSet, GravityScale);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, MaxAcceleration);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, CrouchedHalfHeight);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, MaxWalkSpeed);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, MaxWalkSpeedCrouched);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, BrakingDecelerationWalking);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, JumpZVelocity);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, SecondJumpZVelocity);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, BrakingDecelerationFalling);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, AirControl);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, AirControlBoostThreshold);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, GroundFriction);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, FallingLateralFriction);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, JumpOffJumpZFactor);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, MaxFlySpeed);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, BrakingDecelerationFlying);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, NavAgentRadius);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, NavAgentHeight);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, MaxStepHeight);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, WalkableFloorAngle);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, RotationRateYaw);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, FlightYawRate);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, FlightPitchRate);
    DOREPLIFETIME(UPhasmidMovementAttributeSet, FlightMaxPitchAngle);
}

UPhasmidMovementAttributeSet::UPhasmidMovementAttributeSet() {
    this->GravityScale = 1.25f;
    this->MaxAcceleration = 2048.00f;
    this->CrouchedHalfHeight = 40.00f;
    this->MaxWalkSpeed = 0.00f;
    this->MaxWalkSpeedCrouched = 300.00f;
    this->BrakingDecelerationWalking = 2048.00f;
    this->JumpZVelocity = 750.00f;
    this->SecondJumpZVelocity = 750.00f;
    this->BrakingDecelerationFalling = 2048.00f;
    this->AirControl = 10000.00f;
    this->AirControlBoostThreshold = 0.00f;
    this->GroundFriction = 8.00f;
    this->FallingLateralFriction = 0.00f;
    this->JumpOffJumpZFactor = 0.50f;
    this->MaxFlySpeed = 600.00f;
    this->BrakingDecelerationFlying = 0.00f;
    this->NavAgentRadius = 42.00f;
    this->NavAgentHeight = 192.00f;
    this->MaxStepHeight = 45.00f;
    this->WalkableFloorAngle = 44.77f;
    this->RotationRateYaw = 0.00f;
    this->FlightYawRate = 55.00f;
    this->FlightPitchRate = 150.00f;
    this->FlightMaxPitchAngle = 77.00f;
}

