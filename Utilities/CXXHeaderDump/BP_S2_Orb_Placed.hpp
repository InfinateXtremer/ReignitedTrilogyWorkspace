#ifndef UE4SS_SDK_BP_S2_Orb_Placed_HPP
#define UE4SS_SDK_BP_S2_Orb_Placed_HPP

class ABP_S2_Orb_Placed_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    float GreenOrbBounce_Percent_F94E02F14654B7E5F191F48872138357;                    // 0x07D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GreenOrbBounce__Direction_F94E02F14654B7E5F191F48872138357; // 0x07D4 (size: 0x1)
    class UTimelineComponent* GreenOrbBounce;                                         // 0x07D8 (size: 0x8)
    FVector OriginLocation;                                                           // 0x07E0 (size: 0xC)
    int32 bounceSequence;                                                             // 0x07EC (size: 0x4)
    class ABP_S2_TreasureChest_HeadbashRock_C* associatedRock;                        // 0x07F0 (size: 0x8)

    void UserConstructionScript();
    void GreenOrbBounce__FinishedFunc();
    void GreenOrbBounce__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Loot - OnCollected();
    void set behavior state();
    void ExecuteUbergraph_BP_S2_Orb_Placed(int32 EntryPoint);
}; // Size: 0x7F8

#endif
