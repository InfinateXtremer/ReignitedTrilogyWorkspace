#ifndef UE4SS_SDK_BP_StateComponent_HPP
#define UE4SS_SDK_BP_StateComponent_HPP

class UBP_StateComponent_C : public UFalconEnemyStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UAkAudioEvent* OnEnterSound;                                                // 0x0318 (size: 0x8)
    class UAkAudioEvent* OnExitSound;                                                 // 0x0320 (size: 0x8)

    void BP_OnExitState(class UFalconEnemyStateComponent* NextState);
    void BP_OnEnterState();
    void ExecuteUbergraph_BP_StateComponent(int32 EntryPoint);
}; // Size: 0x328

#endif
