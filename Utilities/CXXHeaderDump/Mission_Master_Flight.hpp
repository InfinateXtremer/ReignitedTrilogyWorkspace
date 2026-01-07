#ifndef UE4SS_SDK_Mission_Master_Flight_HPP
#define UE4SS_SDK_Mission_Master_Flight_HPP

class AMission_Master_Flight_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    bool ActiveAtStart;                                                               // 0x03A0 (size: 0x1)
    TArray<class AActor*> NotifyActors;                                               // 0x03A8 (size: 0x10)
    TArray<class AActor*> Group1_Objectives;                                          // 0x03B8 (size: 0x10)
    TArray<class AActor*> Group2_Objectives;                                          // 0x03C8 (size: 0x10)
    TArray<class AActor*> Group3_Objectives;                                          // 0x03D8 (size: 0x10)
    TArray<class AActor*> Group4_Objectives;                                          // 0x03E8 (size: 0x10)
    int32 Group1_Count;                                                               // 0x03F8 (size: 0x4)
    int32 Group2_Count;                                                               // 0x03FC (size: 0x4)
    int32 Group3_Count;                                                               // 0x0400 (size: 0x4)
    int32 Group4_Count;                                                               // 0x0404 (size: 0x4)
    TArray<class AActor*> Group_Temp;                                                 // 0x0408 (size: 0x10)
    FName WatchState;                                                                 // 0x0418 (size: 0x8)
    bool Success;                                                                     // 0x0420 (size: 0x1)
    int32 Group1_BonusTime;                                                           // 0x0424 (size: 0x4)
    int32 Group2_BonusTime;                                                           // 0x0428 (size: 0x4)
    int32 Group3_BonusTime;                                                           // 0x042C (size: 0x4)
    int32 Group4_BonusTime;                                                           // 0x0430 (size: 0x4)
    float RecordTime;                                                                 // 0x0434 (size: 0x4)
    float StartTime;                                                                  // 0x0438 (size: 0x4)
    int32 AchievementIndex;                                                           // 0x043C (size: 0x4)
    EFlightLevelTargetType Group1_Type;                                               // 0x0440 (size: 0x1)
    EFlightLevelTargetType Group2_Type;                                               // 0x0441 (size: 0x1)
    EFlightLevelTargetType Group3_Type;                                               // 0x0442 (size: 0x1)
    EFlightLevelTargetType Group4_Type;                                               // 0x0443 (size: 0x1)
    EInventoryType Flight Reward Type;                                                // 0x0444 (size: 0x1)
    EFlightLevelResult flight result;                                                 // 0x0445 (size: 0x1)
    class AFlight_StageController_S2_C* StageController;                              // 0x0448 (size: 0x8)
    bool MenuExit;                                                                    // 0x0450 (size: 0x1)
    float CrashValue;                                                                 // 0x0454 (size: 0x4)
    bool Group1_Prev;                                                                 // 0x0458 (size: 0x1)
    bool Group2_Prev;                                                                 // 0x0459 (size: 0x1)
    bool Group3_Prev;                                                                 // 0x045A (size: 0x1)
    bool Group4__Prev;                                                                // 0x045B (size: 0x1)
    bool AllIn1_Prev;                                                                 // 0x045C (size: 0x1)
    bool Inactive;                                                                    // 0x045D (size: 0x1)
    float PlayerBestTime;                                                             // 0x0460 (size: 0x4)
    float CompletionTime;                                                             // 0x0464 (size: 0x4)
    ESkillPoint skillPoint;                                                           // 0x0468 (size: 0x1)
    int32 DebugIndex;                                                                 // 0x046C (size: 0x4)
    TArray<class AActor*> Group_Collected;                                            // 0x0470 (size: 0x10)

    void UI_TimerAddTime(int32 add time);
    void StateChangeHandler(class AActor* StateChangeActor);
    void 2_TestForFailCondition(bool& Test);
    void 2_TestForWinCondition(bool& Test);
    void UserConstructionScript();
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void 2_MissionActive_Startup();
    void StateChangeEvent(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void 2_MissionActive_Shutdown(bool Success);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void UI_Counter_Startup();
    void UI_Counter_Shutdown();
    void UI_Timer_Startup();
    void MissionEnd(bool Success, bool LevelEnd);
    void LocalCleanup(bool Success);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void PrintValues();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void SuccessTheatricsDone();
    void SkillPointCheck();
    void UI Counter Shutdown_DelayEvent();
    void SpyroSpin();
    void ExecuteUbergraph_Mission_Master_Flight(int32 EntryPoint);
}; // Size: 0x480

#endif
