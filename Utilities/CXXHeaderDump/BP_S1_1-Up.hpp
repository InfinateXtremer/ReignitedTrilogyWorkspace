#ifndef UE4SS_SDK_BP_S1_1-Up_HPP
#define UE4SS_SDK_BP_S1_1-Up_HPP

class ABP_S1_1-Up_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x07D0 (size: 0x8)
    bool SetLocation;                                                                 // 0x07D8 (size: 0x1)
    FVector Location;                                                                 // 0x07DC (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Loot - OnCollected();
    void ExecuteUbergraph_BP_S1_1-Up(int32 EntryPoint);
}; // Size: 0x7E8

#endif
