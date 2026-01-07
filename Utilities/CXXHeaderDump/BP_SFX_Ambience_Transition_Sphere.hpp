#ifndef UE4SS_SDK_BP_SFX_Ambience_Transition_Sphere_HPP
#define UE4SS_SDK_BP_SFX_Ambience_Transition_Sphere_HPP

class ABP_SFX_Ambience_Transition_Sphere_C : public ATriggerSphere
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class ABP_SFX_Level_Sound_Controller_C* Sound Controller;                         // 0x0328 (size: 0x8)
    FName Sound State Name;                                                           // 0x0330 (size: 0x8)
    int32 Ambience Priority;                                                          // 0x0338 (size: 0x4)
    bool Interior;                                                                    // 0x033C (size: 0x1)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SFX_Ambience_Transition_Sphere(int32 EntryPoint);
}; // Size: 0x33D

#endif
