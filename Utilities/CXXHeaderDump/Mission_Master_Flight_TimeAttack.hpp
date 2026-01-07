#ifndef UE4SS_SDK_Mission_Master_Flight_TimeAttack_HPP
#define UE4SS_SDK_Mission_Master_Flight_TimeAttack_HPP

class AMission_Master_Flight_TimeAttack_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class AQuestLevelActor_C* Qla;                                                    // 0x03A0 (size: 0x8)
    TSubclassOf<class AActor> Group 1 Actor Class;                                    // 0x03A8 (size: 0x8)
    TSubclassOf<class AActor> Group 2 Actor Class;                                    // 0x03B0 (size: 0x8)
    TSubclassOf<class AActor> Group 3 Actor Class;                                    // 0x03B8 (size: 0x8)
    TSubclassOf<class AActor> Group 4 Actor Class;                                    // 0x03C0 (size: 0x8)
    bool ActiveMenu;                                                                  // 0x03C8 (size: 0x1)
    class AQuestNavPoint_C* SpyroStart;                                               // 0x03D0 (size: 0x8)
    float PlayerBestTime;                                                             // 0x03D8 (size: 0x4)
    float StartTime;                                                                  // 0x03DC (size: 0x4)
    float CompletionTime;                                                             // 0x03E0 (size: 0x4)
    TArray<class AActor*> Group_Collected;                                            // 0x03E8 (size: 0x10)
    TArray<class AActor*> Group_Temp;                                                 // 0x03F8 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x0408 (size: 0x10)
    TArray<class AActor*> Group1_Objectives;                                          // 0x0418 (size: 0x10)
    TArray<class AActor*> Group2_Objectives;                                          // 0x0428 (size: 0x10)
    TArray<class AActor*> Group3_Objectives;                                          // 0x0438 (size: 0x10)
    TArray<class AActor*> Group4_Objectives;                                          // 0x0448 (size: 0x10)
    int32 Group1_BonusTime;                                                           // 0x0458 (size: 0x4)
    int32 Group2_BonusTime;                                                           // 0x045C (size: 0x4)
    int32 Group3_BonusTime;                                                           // 0x0460 (size: 0x4)
    int32 Group4_BonusTime;                                                           // 0x0464 (size: 0x4)
    int32 Group1_Count;                                                               // 0x0468 (size: 0x4)
    int32 Group2_Count;                                                               // 0x046C (size: 0x4)
    int32 Group3_Count;                                                               // 0x0470 (size: 0x4)
    int32 Group4_Count;                                                               // 0x0474 (size: 0x4)
    float CrashValue;                                                                 // 0x0478 (size: 0x4)
    bool Inactive;                                                                    // 0x047C (size: 0x1)
    EFlightLevelTargetType Group1_Type;                                               // 0x047D (size: 0x1)
    EFlightLevelTargetType Group2_Type;                                               // 0x047E (size: 0x1)
    EFlightLevelTargetType Group3_Type;                                               // 0x047F (size: 0x1)
    EFlightLevelTargetType Group4_Type;                                               // 0x0480 (size: 0x1)
    bool Group1_Prev;                                                                 // 0x0481 (size: 0x1)
    bool Group2_Prev;                                                                 // 0x0482 (size: 0x1)
    bool Group3_Prev;                                                                 // 0x0483 (size: 0x1)
    bool Group4__Prev;                                                                // 0x0484 (size: 0x1)
    bool AllIn1_Prev;                                                                 // 0x0485 (size: 0x1)
    EFlightLevelResult flight result;                                                 // 0x0486 (size: 0x1)
    class AFlight_StageController_S2_C* StageController;                              // 0x0488 (size: 0x8)
    EInventoryType Flight Reward Type;                                                // 0x0490 (size: 0x1)
    bool MenuExit;                                                                    // 0x0491 (size: 0x1)
    bool Success;                                                                     // 0x0492 (size: 0x1)
    int32 DebugIndex;                                                                 // 0x0494 (size: 0x4)
    FName WatchState;                                                                 // 0x0498 (size: 0x8)

    void StateChangeHandler(class AActor* StateChangeActor);
    void 2_TestForFailCondition(bool& Test);
    void 2_TestForWinCondition(bool& Test);
    void ResetPosition();
    void UserConstructionScript();
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void UI_Counter_Startup();
    void 2_MissionActive_Startup();
    void UI_Counter_Shutdown();
    void 2_MissionActive_Shutdown(bool Success);
    void ReceiveTick(float DeltaSeconds);
    void CheckBestTime();
    void SuccessTheatricsDone();
    void LocalCleanup(bool Success);
    void PrintValues();
    void StateChangeEvent(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void SpyroSpin();
    void UI Counter Shutdown_DelayEvent();
    void UI_Timer_Startup();
    void ExecuteUbergraph_Mission_Master_Flight_TimeAttack(int32 EntryPoint);
}; // Size: 0x4A0

#endif
