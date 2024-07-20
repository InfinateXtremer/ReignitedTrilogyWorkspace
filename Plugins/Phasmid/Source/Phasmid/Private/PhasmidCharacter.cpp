#include "PhasmidCharacter.h"
#include "CombatPoolComponent.h"
#include "Net/UnrealNetwork.h"
#include "PhasmidAbilitySystemComponent.h"
#include "PhasmidCharacterMovementComponent.h"


class UCurveFloat;
class UCurveVector;
class USplineComponent;

void APhasmidCharacter::SplineJump(USplineComponent* Spline) {
}

bool APhasmidCharacter::ShouldCheckPushOffLedge_Implementation() {
    return false;
}

void APhasmidCharacter::SetTeamId(EPhasmidTeamId newTeamId) {
}


void APhasmidCharacter::PredictRootMotionMoveToForce(FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) {
}

void APhasmidCharacter::PredictRootMotionJumpForce(FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve) {
}

void APhasmidCharacter::OnRep_TeamId_Implementation(EPhasmidTeamId oldTeamId) {
}

bool APhasmidCharacter::IsPressed(FGameplayTag Input) {
    return false;
}

bool APhasmidCharacter::IsJumpProvidingForce() const {
    return false;
}

void APhasmidCharacter::HandleInput_Implementation(FGameplayTag Input, bool bPressed) {
}


void APhasmidCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhasmidCharacter, TeamId);
}

APhasmidCharacter::APhasmidCharacter() {
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->InitialAttributeDataTable = NULL;
    this->bForceSpawnAIController = false;
    this->AbilitySet = NULL;
    this->CombatPool = CreateDefaultSubobject<UCombatPoolComponent>(TEXT("CombatPool"));
    this->TeamId = EPhasmidTeamId::Neutral;
    this->AbilitySystem = CreateDefaultSubobject<UPhasmidAbilitySystemComponent>(TEXT("AbilitySystem"));

}

