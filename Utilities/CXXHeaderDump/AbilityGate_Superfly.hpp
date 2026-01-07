#ifndef UE4SS_SDK_AbilityGate_Superfly_HPP
#define UE4SS_SDK_AbilityGate_Superfly_HPP

class AAbilityGate_Superfly_C : public AAbilityGate_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    bool SetFlightParams;                                                             // 0x0588 (size: 0x1)
    float MaxAlt;                                                                     // 0x058C (size: 0x4)
    float MaxAltSpeed;                                                                // 0x0590 (size: 0x4)
    float MinAlt;                                                                     // 0x0594 (size: 0x4)
    float MinAltSpeed;                                                                // 0x0598 (size: 0x4)
    class AActor* Z_ReferenceActor;                                                   // 0x05A0 (size: 0x8)

    void SuperFlyJumpCheck(bool& TRUE);
    void UserConstructionScript();
    void GrantAbility();
    void ExecuteUbergraph_AbilityGate_Superfly(int32 EntryPoint);
}; // Size: 0x5A8

#endif
