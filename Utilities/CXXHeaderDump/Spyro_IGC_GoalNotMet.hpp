#ifndef UE4SS_SDK_Spyro_IGC_GoalNotMet_HPP
#define UE4SS_SDK_Spyro_IGC_GoalNotMet_HPP

class ASpyro_IGC_GoalNotMet_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    EInventoryType GoalToWatch;                                                       // 0x04E8 (size: 0x1)
    int32 GoalValue;                                                                  // 0x04EC (size: 0x4)
    bool done;                                                                        // 0x04F0 (size: 0x1)
    TArray<class AActor*> NotifyActors;                                               // 0x04F8 (size: 0x10)
    int32 GoalSetIndex_1st;                                                           // 0x0508 (size: 0x4)
    int32 GoalSetIndex_Other;                                                         // 0x050C (size: 0x4)
    int32 GoalSetIndex_RESET;                                                         // 0x0510 (size: 0x4)
    int32 Goal_Local;                                                                 // 0x0514 (size: 0x4)
    bool Spoken;                                                                      // 0x0518 (size: 0x1)
    int32 increment;                                                                  // 0x051C (size: 0x4)
    bool ReceivedUnlockMessage;                                                       // 0x0520 (size: 0x1)
    bool InactiveOnStart;                                                             // 0x0521 (size: 0x1)
    bool ShowGemCount;                                                                // 0x0522 (size: 0x1)
    float CheckInterval;                                                              // 0x0524 (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void MissionAlert(class AActor* Actor, int32 Value);
    void IGC Dialogue Start();
    void All Dialogue Played();
    void PlayerReady();
    void ExecuteUbergraph_Spyro_IGC_GoalNotMet(int32 EntryPoint);
}; // Size: 0x528

#endif
