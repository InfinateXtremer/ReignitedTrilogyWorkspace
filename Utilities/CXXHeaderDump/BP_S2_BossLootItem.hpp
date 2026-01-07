#ifndef UE4SS_SDK_BP_S2_BossLootItem_HPP
#define UE4SS_SDK_BP_S2_BossLootItem_HPP

class ABP_S2_BossLootItem_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Loot - OnCollected();
    void ExecuteUbergraph_BP_S2_BossLootItem(int32 EntryPoint);
}; // Size: 0x7D0

#endif
