

#include "PhasmidCharacter.h"


// Sets default values
APhasmidCharacter::APhasmidCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhasmidCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APhasmidCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APhasmidCharacter::SplineJump(USplineComponent * Spline)
{
}

bool APhasmidCharacter::ShouldCheckPushOffLedge()
{
	return false;
}

void APhasmidCharacter::SetTeamId(EPhasmidTeamId newTeamId)
{
}

void APhasmidCharacter::PredictTagAdded(FGameplayTag TagAdded, float Time)
{
}

void APhasmidCharacter::PredictRootMotionMoveToForce(FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector * PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish)
{
}

void APhasmidCharacter::PredictRootMotionJumpForce(FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, UCurveVector * PathOffsetCurve, UCurveFloat * TimeMappingCurve)
{
}

void APhasmidCharacter::OnRep_TeamId(EPhasmidTeamId oldTeamId)
{
}

void APhasmidCharacter::OnInputDelegate__DelegateSignature(APhasmidCharacter * Character, FGameplayTag InputTag, bool bPressed)
{
}

bool APhasmidCharacter::IsPressed(FGameplayTag Input)
{
	return false;
}

bool APhasmidCharacter::IsJumpProvidingForce()
{
	return false;
}

void APhasmidCharacter::HandleInput(FGameplayTag Input, bool bPressed)
{
}

void APhasmidCharacter::BP_FellOutOfWorld()
{
}
