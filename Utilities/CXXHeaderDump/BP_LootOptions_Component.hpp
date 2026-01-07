#ifndef UE4SS_SDK_BP_LootOptions_Component_HPP
#define UE4SS_SDK_BP_LootOptions_Component_HPP

class UBP_LootOptions_Component_C : public UActorComponent
{
    bool AutoCollect?;                                                                // 0x00F0 (size: 0x1)
    bool DelayedSequence?;                                                            // 0x00F1 (size: 0x1)
    int32 Utility_LootID;                                                             // 0x00F4 (size: 0x4)
    int32 SFXIgnore_Count;                                                            // 0x00F8 (size: 0x4)
    int32 sfxIndex;                                                                   // 0x00FC (size: 0x4)
    bool BossCollection?;                                                             // 0x0100 (size: 0x1)

    void Loot Options - Request SFX(bool& doPlay?, int32& sfxIndex);
}; // Size: 0x101

#endif
