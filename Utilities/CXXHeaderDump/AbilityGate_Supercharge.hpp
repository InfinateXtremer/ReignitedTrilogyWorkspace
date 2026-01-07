#ifndef UE4SS_SDK_AbilityGate_Supercharge_HPP
#define UE4SS_SDK_AbilityGate_Supercharge_HPP

class AAbilityGate_Supercharge_C : public AAbilityGate_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UserConstructionScript();
    void GrantAbility();
    void RevokeAbility();
    void AbilityActive();
    void ExecuteUbergraph_AbilityGate_Supercharge(int32 EntryPoint);
}; // Size: 0x588

#endif
