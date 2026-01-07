#ifndef UE4SS_SDK_127_CollisionBlocker_2_HPP
#define UE4SS_SDK_127_CollisionBlocker_2_HPP

class A127_CollisionBlocker_2_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBoxComponent* CollisionBlocker2;                                           // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Off;                                            // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_On;                                             // 0x0498 (size: 0x8)
    class UBoxComponent* CollisionBlocker;                                            // 0x04A0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_127_CollisionBlocker_2(int32 EntryPoint);
}; // Size: 0x4A8

#endif
