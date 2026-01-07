#ifndef UE4SS_SDK_BP_133_StatePump_HPP
#define UE4SS_SDK_BP_133_StatePump_HPP

class ABP_133_StatePump_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x09F8 (size: 0x8)
    FVector Origin;                                                                   // 0x0A00 (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_133_StatePump(int32 EntryPoint);
}; // Size: 0xA0C

#endif
