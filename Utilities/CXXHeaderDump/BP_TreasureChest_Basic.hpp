#ifndef UE4SS_SDK_BP_TreasureChest_Basic_HPP
#define UE4SS_SDK_BP_TreasureChest_Basic_HPP

class ABP_TreasureChest_Basic_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureChest_Basic(int32 EntryPoint);
}; // Size: 0x628

#endif
