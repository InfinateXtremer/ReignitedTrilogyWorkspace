#ifndef UE4SS_SDK_Spyro_IGC_Dialogue_HPP
#define UE4SS_SDK_Spyro_IGC_Dialogue_HPP

class ASpyro_IGC_Dialogue_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class AActor* Flight_SuspendActor;                                                // 0x04E8 (size: 0x8)
    bool Flight_SuspendStart;                                                         // 0x04F0 (size: 0x1)
    bool Flight_RestoreEnd;                                                           // 0x04F1 (size: 0x1)
    int32 difficulty;                                                                 // 0x04F4 (size: 0x4)
    bool Difficulty_Active;                                                           // 0x04F8 (size: 0x1)
    bool ShowGemCount;                                                                // 0x04F9 (size: 0x1)

    void UserConstructionScript();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void All Dialogue Played();
    void IGC Dialogue Start();
    void ExecuteUbergraph_Spyro_IGC_Dialogue(int32 EntryPoint);
}; // Size: 0x4FA

#endif
