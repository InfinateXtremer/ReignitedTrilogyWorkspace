#ifndef UE4SS_SDK_ABP_CharacterInterface_HPP
#define UE4SS_SDK_ABP_CharacterInterface_HPP

class IABP_CharacterInterface_C : public IInterface
{

    void INotifyWallLeaning(float WallLeanDirection, bool IsWallLeaning);
    void INotifyIceSkatingIsSpyro3(bool IsSpyro3);
    void INotifyCameraRadiusTargetSmall(bool IsCameraRadiusTargetSmall);
    void INotifyCheatMiniWings(bool MiniWingsEnabled);
    void INotifyCheatMiniHead(bool MiniHeadEnabled);
    void INotifyCheatBigHead(bool BigHeadEnabled);
    void INotifyStandingOnLedge(bool StandingOnLedge, bool FacingLedge, bool IsMovingTowardsLedge);
    void INotifySpitItemConsumed(bool Consumed);
    void INotifyPortalTransitionStateChanged(TEnumAsByte<EPortalTransitionState::Type> NewState);
    void INotifySideRollEnd(bool ShouldEnd);
    void INotifySideRollDirection(bool Right);
    void INotifyFlyingFlapWings(bool FlapWings);
    void INotifyChargeDealtDamage(bool ChargeDealtDamage);
    void INotifyForwardVectorTurnAnims(bool ForwardVectorTurns);
    void INotifySwimStateChanged(TEnumAsByte<ESwimState::Type> NewState);
    void INotifySpyroAnimStateChanged(TEnumAsByte<EAnimStateSpyro::Type> NewSpryoAnimState);
    void INotifyFreeLookStateChanged(TEnumAsByte<EFreeLookState::Type> NewState);
    void INotifyFireStateChanged(TEnumAsByte<EFireState::Type> NewState);
    void INotifyChargeStateChanged(TEnumAsByte<EChargeState::Type> NewState);
    void INotifyGlideStateChanged(TEnumAsByte<EGlideState::Type> NewState);
    void INotifyJumpStateChanged(TEnumAsByte<EJumpState::Type> JumpState);
}; // Size: 0x28

#endif
