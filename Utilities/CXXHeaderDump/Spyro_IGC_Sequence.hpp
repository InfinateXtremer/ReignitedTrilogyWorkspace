#ifndef UE4SS_SDK_Spyro_IGC_Sequence_HPP
#define UE4SS_SDK_Spyro_IGC_Sequence_HPP

class ASpyro_IGC_Sequence_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    FPhasmidSoftReference TFBLevelSequenceSoftRef;                                    // 0x04E8 (size: 0x28)
    class ATfbLevelSequenceActor* TFBLevelSequence;                                   // 0x0510 (size: 0x8)
    TArray<class AActor*> NotifyActors;                                               // 0x0518 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0528 (size: 0x4)
    bool EventAtStart;                                                                // 0x052C (size: 0x1)
    float SkipDelay;                                                                  // 0x0530 (size: 0x4)
    bool UseFade_Start;                                                               // 0x0534 (size: 0x1)
    bool UseFade_End;                                                                 // 0x0535 (size: 0x1)
    float FadeTimeAdjust;                                                             // 0x0538 (size: 0x4)
    float FadeTimeAdjust_Local;                                                       // 0x053C (size: 0x4)
    float Hold;                                                                       // 0x0540 (size: 0x4)

    void UserConstructionScript();
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void SequenceEnded();
    void IGC Shutdown();
    void PlayerReady();
    void IGC_QueueFire();
    void FadeOutControl(float Duration, float Hold, bool Skipped);
    void ExecuteUbergraph_Spyro_IGC_Sequence(int32 EntryPoint);
}; // Size: 0x544

#endif
