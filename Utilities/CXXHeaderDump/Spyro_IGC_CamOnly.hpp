#ifndef UE4SS_SDK_Spyro_IGC_CamOnly_HPP
#define UE4SS_SDK_Spyro_IGC_CamOnly_HPP

class ASpyro_IGC_CamOnly_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    float IGC_Length;                                                                 // 0x04E8 (size: 0x4)
    TArray<class AActor*> NotifyActors;                                               // 0x04F0 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0500 (size: 0x4)
    bool EventAtStart;                                                                // 0x0504 (size: 0x1)
    float EventDelay;                                                                 // 0x0508 (size: 0x4)
    bool UseStartFade;                                                                // 0x050C (size: 0x1)
    bool UseEndFade;                                                                  // 0x050D (size: 0x1)
    float HoldTime;                                                                   // 0x0510 (size: 0x4)

    void UserConstructionScript();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void FadeSequence();
    void IGC_QueueFire();
    void ExecuteUbergraph_Spyro_IGC_CamOnly(int32 EntryPoint);
}; // Size: 0x514

#endif
