#ifndef UE4SS_SDK_BP_S1_ThiefKey_HPP
#define UE4SS_SDK_BP_S1_ThiefKey_HPP

class ABP_S1_ThiefKey_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    float KeyPopup_PopupZ_F6DE669D49020692EF5187A9374F616A;                           // 0x07D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> KeyPopup__Direction_F6DE669D49020692EF5187A9374F616A; // 0x07D4 (size: 0x1)
    class UTimelineComponent* KeyPopup;                                               // 0x07D8 (size: 0x8)
    FVector startingLocation;                                                         // 0x07E0 (size: 0xC)

    void UserConstructionScript();
    void KeyPopup__FinishedFunc();
    void KeyPopup__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void set collected(bool was collected);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Loot - OnCollected();
    void ExecuteUbergraph_BP_S1_ThiefKey(int32 EntryPoint);
}; // Size: 0x7EC

#endif
