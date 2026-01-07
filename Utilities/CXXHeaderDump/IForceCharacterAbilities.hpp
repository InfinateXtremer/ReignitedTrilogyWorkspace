#ifndef UE4SS_SDK_IForceCharacterAbilities_HPP
#define UE4SS_SDK_IForceCharacterAbilities_HPP

class IIForceCharacterAbilities_C : public IInterface
{

    void IForceAbility:TimeOutFireSneeze();
    void IForceAbility:IceFire(bool CanIceFire);
    void IForceAbility:AutoCharge(bool AutoCharge);
    void IForceAbility:SetSpyroVisibility(bool NewVisibility);
    void IForceAbility:SuperFireUpdateIndicator();
    void IForceAbility:ChangeSpyroMaterial(TEnumAsByte<ESpyroMaterials::Type> NewSpyroMaterial);
    void IForceAbility:RageFire(bool CanRageFire);
    void IForceAbility:GetCustomProjectile(FPhasmidProjectileStruct& CustomProjectile);
    void IForceAbility:ClearCustomProjectile();
    void IForceAbility:SetCustomProjectile(FPhasmidProjectileStruct Projectile);
    void IForceAbility:CanSuperCharge(bool CanSuperCharge, bool Alternate);
    void IForceAbility:FallToDeath();
    void IForceAbility:DebugSetGodMode(bool IsGodModeActive);
    void IForceAbility:DebugGetSparxInvisibility(bool& IsInvisible);
    void IForceAbility:DebugSetSparxInvisibility(bool IsInvisible);
    void IForceAbility:CanSuperFly(bool CanSuperFly);
    void IForceAbility:SetFlightParameters(float MaxAltitude, float MaxAltitudeSpeed, float MinAltitude, float MinAltitudeSpeed, class AActor* ReferenceAltitudeActor);
    void IForceAbility:IceBreath(bool CanIceBreath);
    void IForceAbility:SuperFire(bool CanSuperFire);
    void IForceAbility:SuperJump();
    void IForceAbility:Invincibility(bool IsInvincible);
    void IForceAbility:SuperFly(bool IsSuperFlying);
    void IForceAbility:SuperCharge(bool IsSuperCharging, bool Alternate);
    void IForceAbility:Fly(bool IsFlying);
    void IForceAbility:Glide(bool IsGliding);
}; // Size: 0x28

#endif
