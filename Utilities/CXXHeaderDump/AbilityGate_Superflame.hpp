#ifndef UE4SS_SDK_AbilityGate_Superflame_HPP
#define UE4SS_SDK_AbilityGate_Superflame_HPP

class AAbilityGate_Superflame_C : public AAbilityGate_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void UserConstructionScript();
    void GrantAbility();
    void RevokeAbility();
    void ExecuteUbergraph_AbilityGate_Superflame(int32 EntryPoint);
}; // Size: 0x588

#endif
