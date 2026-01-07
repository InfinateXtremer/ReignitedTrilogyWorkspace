#ifndef UE4SS_SDK_Spyro_IGC_DoEvent_HPP
#define UE4SS_SDK_Spyro_IGC_DoEvent_HPP

class ASpyro_IGC_DoEvent_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    TArray<class AActor*> NotifyActors;                                               // 0x04E8 (size: 0x10)
    int32 NotifyValue;                                                                // 0x04F8 (size: 0x4)
    float EndDelay;                                                                   // 0x04FC (size: 0x4)
    bool EventAtStart;                                                                // 0x0500 (size: 0x1)
    int32 difficulty;                                                                 // 0x0504 (size: 0x4)
    bool Difficulty_Active;                                                           // 0x0508 (size: 0x1)

    void UserConstructionScript();
    void All Dialogue Played();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void IGC Dialogue Start();
    void ExecuteUbergraph_Spyro_IGC_DoEvent(int32 EntryPoint);
}; // Size: 0x509

#endif
