#ifndef UE4SS_SDK_BP_SFX_Ambience_Transition_HPP
#define UE4SS_SDK_BP_SFX_Ambience_Transition_HPP

class ABP_SFX_Ambience_Transition_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class ABP_SFX_Level_Sound_Controller_C* Sound Controller;                         // 0x0328 (size: 0x8)
    FName Sound State Name;                                                           // 0x0330 (size: 0x8)
    int32 Ambience Priority;                                                          // 0x0338 (size: 0x4)
    bool Interior;                                                                    // 0x033C (size: 0x1)
    bool TransitionMusic;                                                             // 0x033D (size: 0x1)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SFX_Ambience_Transition(int32 EntryPoint);
}; // Size: 0x33E

#endif
