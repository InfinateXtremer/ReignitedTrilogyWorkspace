#ifndef UE4SS_SDK_BP_S1_LifeOrb_HPP
#define UE4SS_SDK_BP_S1_LifeOrb_HPP

class ABP_S1_LifeOrb_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)

    void get collected(bool& was collected);
    void UserConstructionScript();
    void Loot - OnCollected();
    void set behavior state();
    void ExecuteUbergraph_BP_S1_LifeOrb(int32 EntryPoint);
}; // Size: 0x7D0

#endif
