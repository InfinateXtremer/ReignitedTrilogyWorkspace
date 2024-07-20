#include "PhasmidCharacterMovementComponent.h"

class AActor;
class UPrimitiveComponent;

bool UPhasmidCharacterMovementComponent::UpdatePushOffLedge() {
    return false;
}

void UPhasmidCharacterMovementComponent::RestoreSkateTurboState() {
}

void UPhasmidCharacterMovementComponent::ResetSkateTurbo() {
}

void UPhasmidCharacterMovementComponent::OverrideSkateboardValues(float GroundSpeed, float GroundAccel, float TurboSpeed, float TurboAccel, float MaxTurboPoints, const FVector& BoardSize, const FVector& BoardOffset, float WheelRadius, float RollAngVert, float MaxSpeed, float MaxSpeedWhenTurboAllowed) {
}

bool UPhasmidCharacterMovementComponent::IsUsingAutoSkateTurbo() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::IsSkateboardTurboEnabled() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::IsSkateboarding() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::IsSkateboardCrashing() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::IsMovingingTowardsLedge() {
    return false;
}

bool UPhasmidCharacterMovementComponent::IsBeingPushedOffLedge() {
    return false;
}

bool UPhasmidCharacterMovementComponent::HasFeetOffGround() {
    return false;
}

void UPhasmidCharacterMovementComponent::GiveSkateTurboPoints(int32 Points) {
}

float UPhasmidCharacterMovementComponent::GetSkateTurboPoints() const {
    return 0.0f;
}

float UPhasmidCharacterMovementComponent::GetSkateTurboPercent() const {
    return 0.0f;
}

void UPhasmidCharacterMovementComponent::GetSkateboardAnimInfo(FName& Name, FVector2D& Input) const {
}

float UPhasmidCharacterMovementComponent::GetMovementSpeedForAnimation() const {
    return 0.0f;
}

float UPhasmidCharacterMovementComponent::GetMaxSkateTurboPoints() const {
    return 0.0f;
}

int32 UPhasmidCharacterMovementComponent::GetFeetOnGround() {
    return 0;
}

FVector UPhasmidCharacterMovementComponent::GetAverageGroundNormal() {
    return FVector{};
}

void UPhasmidCharacterMovementComponent::EnableSkateboardTurbo(bool Enable) {
}

void UPhasmidCharacterMovementComponent::ClearSkateTurboState() {
}

void UPhasmidCharacterMovementComponent::CheckNotOverlapping(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

bool UPhasmidCharacterMovementComponent::CanUseSkateTurbo() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::CanConsumeSkateTurbo() const {
    return false;
}

bool UPhasmidCharacterMovementComponent::AreFeetOffGround(int32 Feet, int32& FeetOffGround) {
    return false;
}

void UPhasmidCharacterMovementComponent::ActivateAutoSkateTurbo(float Seconds) {
}

UPhasmidCharacterMovementComponent::UPhasmidCharacterMovementComponent() {
    this->bDisableWallSliding = false;
    this->bMoveAnywaysWhenBlocked = false;
    this->bHorizontalPush = false;
    this->bDisableJumpCollisions = false;
    this->bSlideOffLevelObjects = false;
    this->bCanPushOtherPawns = false;
    this->bCannotBePushedByOthers = false;
    this->bCanTurnAroundInAir = true;
    this->bDisableLand = false;
    this->bCanAlwaysJump = false;
    this->bEnableSplineMovement = true;
    this->bPreciseFloorCheckingWhileFlying = false;
    this->MaxSplineSpeed = 0.00f;
    this->SplineDistanceAcceptance = 10.00f;
    this->DefaultSplineTraversalMode = EPhasmidSplineTraversalMode::Flying;
    this->bEnableCarMovement = false;
    this->CarTurningRate = 90.00f;
    this->AttachBoardClass = NULL;
    this->CrashBoardClass = NULL;
    this->bStepUpWhileFlying = true;
    this->bUseMaxSpeedSmoothing = true;
    this->SlideBounceRatio = 0.00f;
    this->SlideClampMin = 0.00f;
    this->SlideAwayMultiplier = 0.00f;
    this->SlideClampMax = 1.00f;
    this->bClampSlide = false;
    this->bSlideAwayFromConvexWalls = false;
    this->PushStrength = 10000.00f;
    this->SelfPushVelocity = 200.00f;
    this->SelfPushZMax = 5.00f;
    this->SelfPushDuration = 0.25f;
    this->bNoLandOnInvalid = false;
    this->DefaultJumpTraversalRate = 1.00f;
    this->DefaultApexHeight = 100.00f;
    this->MinAnimSpeedInputMultiplier = 0.00f;
    this->bAllowSteppingOffNavMesh = true;
    this->bLimitSplineVelocity = false;
    this->bAllowTurningOffMovement = false;
    this->bUseSplineFlying2 = false;
    this->FootOffLedgeScale = 0.00f;
    this->FootTraceLength = 0.00f;
    this->IdleFootMeshYaw = 0.00f;
    this->FootTraceDuration = 0.00f;
    this->LedgePushDistanceRatio = 0.00f;
    this->LedgePushDistance = 0.00f;
    this->LedgePushAcceleration = 0.10f;
    this->LedgePushDeceleration = 0.20f;
}

