#ifndef UE4SS_SDK_AbilityGate_Superjump_HPP
#define UE4SS_SDK_AbilityGate_Superjump_HPP

class AAbilityGate_Superjump_C : public AAbilityGate_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class AActor* DebugTeleportActor;                                                 // 0x0588 (size: 0x8)

    void UserConstructionScript();
    void GrantAbility();
    void AbilityActive();
    void ExecuteUbergraph_AbilityGate_Superjump(int32 EntryPoint);
}; // Size: 0x590

#endif
