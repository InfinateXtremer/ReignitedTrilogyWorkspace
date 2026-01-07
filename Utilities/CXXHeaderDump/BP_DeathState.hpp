#ifndef UE4SS_SDK_BP_DeathState_HPP
#define UE4SS_SDK_BP_DeathState_HPP

class UBP_DeathState_C : public UFalconDeathStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UAkAudioEvent* OnEnterSound;                                                // 0x0318 (size: 0x8)

    void BP_OnEnterState();
    void ExecuteUbergraph_BP_DeathState(int32 EntryPoint);
}; // Size: 0x320

#endif
