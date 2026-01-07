#ifndef UE4SS_SDK_BP_CNS2113_IggyTheIcebuilder_HPP
#define UE4SS_SDK_BP_CNS2113_IggyTheIcebuilder_HPP

class ABP_CNS2113_IggyTheIcebuilder_C : public ABP_211_Eskimo_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B8 (size: 0x8)
    class UFalconEnemyStateComponent* State_SpearHang;                                // 0x09C0 (size: 0x8)
    float PositionSnap_NewTrack_0_6458F28947C2E92B5C3AFC8E10B7241B;                   // 0x09C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PositionSnap__Direction_6458F28947C2E92B5C3AFC8E10B7241B; // 0x09CC (size: 0x1)
    class UTimelineComponent* PositionSnap;                                           // 0x09D0 (size: 0x8)
    class AActor* HangingPlatform;                                                    // 0x09D8 (size: 0x8)
    class ATargetPoint* HangingPointEnd;                                              // 0x09E0 (size: 0x8)
    FVector position_arrival;                                                         // 0x09E8 (size: 0xC)

    void UserConstructionScript();
    void PositionSnap__FinishedFunc();
    void PositionSnap__UpdateFunc();
    void BndEvt__State_SpearHang_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CNS2113_IggyTheIcebuilder(int32 EntryPoint);
}; // Size: 0x9F4

#endif
