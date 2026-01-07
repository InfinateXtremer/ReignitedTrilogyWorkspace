#ifndef UE4SS_SDK_AbilityGate_Invincible_HPP
#define UE4SS_SDK_AbilityGate_Invincible_HPP

class AAbilityGate_Invincible_C : public AAbilityGate_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    FAbilityGate_Invincible_COnInvincibleGateStart OnInvincibleGateStart;             // 0x0588 (size: 0x10)
    FAbilityGate_Invincible_COnInvincibleGateEnd OnInvincibleGateEnd;                 // 0x0598 (size: 0x10)
    bool harmfulTerrainDisable;                                                       // 0x05A8 (size: 0x1)
    bool canDisableHarmfulTerrian;                                                    // 0x05A9 (size: 0x1)

    void UserConstructionScript();
    void GrantAbility();
    void RevokeAbility();
    void disableHarmfulTerrain();
    void ExecuteUbergraph_AbilityGate_Invincible(int32 EntryPoint);
    void OnInvincibleGateEnd__DelegateSignature();
    void OnInvincibleGateStart__DelegateSignature();
}; // Size: 0x5AA

#endif
