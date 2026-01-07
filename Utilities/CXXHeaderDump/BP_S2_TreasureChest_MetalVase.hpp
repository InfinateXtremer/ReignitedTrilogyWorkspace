#ifndef UE4SS_SDK_BP_S2_TreasureChest_MetalVase_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_MetalVase_HPP

class ABP_S2_TreasureChest_MetalVase_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_S2_TreasureChest_MetalVase(int32 EntryPoint);
}; // Size: 0x628

#endif
