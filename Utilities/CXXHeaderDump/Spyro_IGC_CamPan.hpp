#ifndef UE4SS_SDK_Spyro_IGC_CamPan_HPP
#define UE4SS_SDK_Spyro_IGC_CamPan_HPP

class ASpyro_IGC_CamPan_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UCameraComponent* Camera_EndPos;                                            // 0x04E8 (size: 0x8)
    class UCameraComponent* Camera_StartPos;                                          // 0x04F0 (size: 0x8)
    float CameraPan_NewTrack_0_D9FDBAEF410D927A706347A305A17562;                      // 0x04F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraPan__Direction_D9FDBAEF410D927A706347A305A17562; // 0x04FC (size: 0x1)
    class UTimelineComponent* CameraPan;                                              // 0x0500 (size: 0x8)
    float IGC_Length;                                                                 // 0x0508 (size: 0x4)
    TArray<class AActor*> NotifyActors;                                               // 0x0510 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0520 (size: 0x4)
    bool EventAtStart;                                                                // 0x0524 (size: 0x1)
    bool FadeIn;                                                                      // 0x0525 (size: 0x1)
    bool FadeOut;                                                                     // 0x0526 (size: 0x1)
    float PanDelay;                                                                   // 0x0528 (size: 0x4)
    float TimelinePlayRate;                                                           // 0x052C (size: 0x4)
    FTransform StartTransform;                                                        // 0x0530 (size: 0x30)
    FTransform EndTransform;                                                          // 0x0560 (size: 0x30)
    float fadeTime;                                                                   // 0x0590 (size: 0x4)
    bool Debug_Button1;                                                               // 0x0594 (size: 0x1)

    void UserConstructionScript();
    void CameraPan__FinishedFunc();
    void CameraPan__UpdateFunc();
    void ReceiveBeginPlay();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void ExecuteUbergraph_Spyro_IGC_CamPan(int32 EntryPoint);
}; // Size: 0x595

#endif
