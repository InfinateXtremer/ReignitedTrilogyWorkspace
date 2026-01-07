#ifndef UE4SS_SDK_Spyro_IGC_MissionStart_HPP
#define UE4SS_SDK_Spyro_IGC_MissionStart_HPP

class ASpyro_IGC_MissionStart_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class AActor* MissionMaster;                                                      // 0x04E8 (size: 0x8)
    float MissionMasterDelayStart;                                                    // 0x04F0 (size: 0x4)
    int32 NextIGC_Success;                                                            // 0x04F4 (size: 0x4)
    int32 NextIGC_Fail;                                                               // 0x04F8 (size: 0x4)
    TArray<class AActor*> NotifyActors;                                               // 0x0500 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0510 (size: 0x4)
    bool NotifyAtStart;                                                               // 0x0514 (size: 0x1)
    int32 difficulty;                                                                 // 0x0518 (size: 0x4)
    bool Difficulty_Active;                                                           // 0x051C (size: 0x1)
    bool Suspended;                                                                   // 0x051D (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionRestore();
    void All Dialogue Played();
    void MissionEnd(bool Success, bool LevelEnd);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void HUD Dialogue Value Startup();
    void MissionSuspend(bool Suspend);
    void ExecuteUbergraph_Spyro_IGC_MissionStart(int32 EntryPoint);
}; // Size: 0x51E

#endif
