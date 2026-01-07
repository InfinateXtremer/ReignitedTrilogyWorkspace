#ifndef UE4SS_SDK_IPlayableCharacterActions_HPP
#define UE4SS_SDK_IPlayableCharacterActions_HPP

class IIPlayableCharacterActions_C : public IInterface
{

    void IDoChargeMovementWallHugCheck(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector, bool& PushingAgainstGeo);
    void IDoChargeMovementBonkCheck(FVector Direction, float Tolerance, bool SwitchVerticalOffset, bool& ShouldBonk);
    void INotifyClimbingReattach();
    void INotifyRunStop();
    void IDoFireAttackButtonReleased();
    void IRequestSparxGemFinder(bool IsFindingGem);
    void INotifySparxIsUnderwater(bool IsUnderwater);
    void IRequestChargeBonk();
    void IDoNotifyFlyOutOfBounds();
    void IDoRequestFlyTwistLoop();
    void IDoRequestFlyLoop();
    void IGetSuperChargeJumpAssistParams(float& Gravity, float& JumpZVelocity, float& JumpMaxHoldTime, float& GravityStageTwo, float& JumpZVelocityStageTwo, float& JumpMaxHoldTimeStageTwo, float& GravityStageThree, float& JumpZVelocityStageThree, float& JumpMaxHoldTimeStageThree);
    void ISetSuperChargeJumpAssistParams(float Gravity, float JumpZVelocity, float JumpMaxHoldTime, float GravityStageTwo, float JumpZVelocityStageTwo, float JumpMaxHoldTimeStageTwo, float GravityStageThree, float JumpZVelocityStageThree, float JumpMaxHoldTimeStageThree);
    void IDoBomb(bool Pressed);
    void IGetIsBombing(bool& IsBombing);
    void IDoShoot(bool Pressed);
    void IGetIsShooting(bool& IsShooting);
    void IDoStrafe(bool Pressed);
    void IGetIsStrafing(bool& IsStrafing);
    void IGetGeoCompensatedMovementVector(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector);
    void IUpdateFlightControls(float YawInput, float PitchInput, float RollInput, bool IsKeyboardMouseAndUsingMouse);
    void INotifyFlyEnded();
    void INotifyFlyStarted();
    void ICheckCanDive(bool& CanDive);
    void INotifyPlayerSettingsUpdated();
    void IRequestForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool Looping, bool IgnoreTimeDilation, FName EffectTag);
    void INotifyForwardVectorMovement(bool ForwardVectorMovement);
    void IGetIsSkateboarding(bool& IsSkateboarding);
    void IDoSkateboard(bool EnableTurbo);
    void IGetSwimVolumeInfo(FVector& SurfaceOrigin, bool& DivingDisabled);
    void INotifyPlayerInSwimVolume(FVector SurfaceOrigin, bool DivingDisabled);
    void IGetIsSwimming(bool& IsSwimming);
    void IRequestClimbMovement(FVector2D StickInput, bool& CanMove);
    void IGetIsClimbing(bool& IsClimbing);
    void INotifyPlayerInClimbVolume(bool InVolume, FVector VolumeForwardVector);
    void INotifyFootstep(FName FootSocketName, bool IsRightFoot);
    void ICheckForWorldDamage(class AActor* WorldDamageActor);
    void IClearSpitItemActor();
    void IGetSpitItemActor(bool& IsValid, class ABP_SpitItemPlacement_Base_C*& SpitItemActor);
    void INotifySpitItemConsumed(class ABP_SpitItemPlacement_Base_C* SpitItemActor);
    void INotifyCarryingItem(bool CarryingItem);
    void IDoRequestHeadBash();
    void IGetIsJumpButtonPressed(bool Pressed);
    void IRequestSparxChaseButterfly(class ABP_ButterflyHealth_C* Butterfly);
    void IGetCharacterInitialData(FSpyroCharacterInitialData& InitialData);
    void IRequestSparxFetchCollectible(FVector CollectibleLocation);
    void ISetSparxVisibility(bool visible, bool ResetStack);
    void ISetSparxMovementMode(TEnumAsByte<ESparxMovementModes::Type> NewMovementMode);
    void IGetIsInAbilities(FGameplayTagContainer AbilityTags, bool& IsInAbilities);
    void IGetIsInFlightLevel(bool& IsInFlightLevel);
    void INotifyCharacterIsInFlightLevel(bool IsInFlightLevel);
    void IGetIsSideRolling(bool& IsSideRolling);
    void IDoSideRoll(bool Pressed, float Direction);
    void IGetIsFlying(bool& IsFlying);
    void IDoFly();
    void IGetIsJumping(bool& IsJumping);
    void IGetIsFreeLooking(bool& IsFreeLooking);
    void IDoFreeLook(bool Pressed);
    void IDoGlideCancel();
    void INotifyUnderDesignerControl(bool IsUnderDesignerControl);
    void IDoFireAttack();
    void IGetIsGliding(bool& IsGliding);
    void IGetIsCharging(bool& IsCharging);
    void IDoCharge(bool Pressed);
    void IGetMovementMode(TEnumAsByte<EMovementMode>& CurrentMovementMode, TEnumAsByte<EMovementMode>& PreviousMovementMode);
    void IDoGlide();
    void IDoJump(bool Pressed);
}; // Size: 0x28

#endif
