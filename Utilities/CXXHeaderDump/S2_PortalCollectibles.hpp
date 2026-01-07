#ifndef UE4SS_SDK_S2_PortalCollectibles_HPP
#define UE4SS_SDK_S2_PortalCollectibles_HPP

class US2_PortalCollectibles_C : public UPortalItemsComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class APortalItemActor_C* Talisman Actor;                                         // 0x0348 (size: 0x8)
    float RotationRate;                                                               // 0x0350 (size: 0x4)

    void TalismanCollected(bool& Talisman Collected);
    void ReceiveTick(float DeltaSeconds);
    void PlaceItems_2();
    void Replace Items();
    void ExecuteUbergraph_S2_PortalCollectibles(int32 EntryPoint);
}; // Size: 0x354

#endif
