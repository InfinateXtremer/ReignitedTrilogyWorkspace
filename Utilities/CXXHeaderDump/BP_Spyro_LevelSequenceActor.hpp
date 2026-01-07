#ifndef UE4SS_SDK_BP_Spyro_LevelSequenceActor_HPP
#define UE4SS_SDK_BP_Spyro_LevelSequenceActor_HPP

class ABP_Spyro_LevelSequenceActor_C : public ALevelSequenceActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void On Play();
    void On Stop();
    void ExecuteUbergraph_BP_Spyro_LevelSequenceActor(int32 EntryPoint);
}; // Size: 0x3B8

#endif
