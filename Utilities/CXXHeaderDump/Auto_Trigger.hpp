#ifndef UE4SS_SDK_Auto_Trigger_HPP
#define UE4SS_SDK_Auto_Trigger_HPP

class AAuto_Trigger_C : public AActor
{
    class UStaticMeshComponent* Cylinder;                                             // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AActor* Transition_Track;                                                   // 0x0328 (size: 0x8)
    class AActor* Transition_Target;                                                  // 0x0330 (size: 0x8)
    class AActor* Activation_Track;                                                   // 0x0338 (size: 0x8)
    bool Switch_Transition;                                                           // 0x0340 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x341

#endif
