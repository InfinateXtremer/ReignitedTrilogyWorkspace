#ifndef UE4SS_SDK_BP_TreasureChest_Metal_HPP
#define UE4SS_SDK_BP_TreasureChest_Metal_HPP

class ABP_TreasureChest_Metal_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_TreasureChest_Metal(int32 EntryPoint);
}; // Size: 0x628

#endif
