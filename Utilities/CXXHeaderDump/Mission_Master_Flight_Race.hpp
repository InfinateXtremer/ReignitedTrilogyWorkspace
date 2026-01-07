#ifndef UE4SS_SDK_Mission_Master_Flight_Race_HPP
#define UE4SS_SDK_Mission_Master_Flight_Race_HPP

class AMission_Master_Flight_Race_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class AQuestLevelActor_C* Qla;                                                    // 0x03A0 (size: 0x8)
    TSubclassOf<class AActor> Group 1 Actor Class;                                    // 0x03A8 (size: 0x8)
    TSubclassOf<class AActor> Group 2 Actor Class;                                    // 0x03B0 (size: 0x8)
    TSubclassOf<class AActor> Group 3 Actor Class;                                    // 0x03B8 (size: 0x8)
    TSubclassOf<class AActor> Group 4 Actor Class;                                    // 0x03C0 (size: 0x8)
    bool OffCourse;                                                                   // 0x03C8 (size: 0x1)
    class UUI_Flight_LapsPlace_C* Race_UI_Widget;                                     // 0x03D0 (size: 0x8)
    int32 CurrentPlace;                                                               // 0x03D8 (size: 0x4)
    int32 RingsCompleted;                                                             // 0x03DC (size: 0x4)
    int32 totalRings;                                                                 // 0x03E0 (size: 0x4)
    int32 CurrentLap;                                                                 // 0x03E4 (size: 0x4)
    bool ActiveMenu;                                                                  // 0x03E8 (size: 0x1)
    bool isMushroom;                                                                  // 0x03E9 (size: 0x1)
    bool isRacing;                                                                    // 0x03EA (size: 0x1)
    class AQuestNavPoint_C* SpyroStart;                                               // 0x03F0 (size: 0x8)
    bool MenuExit;                                                                    // 0x03F8 (size: 0x1)
    float CompletionTime;                                                             // 0x03FC (size: 0x4)
    float StartTime;                                                                  // 0x0400 (size: 0x4)
    TArray<class AActor*> NotifyActors;                                               // 0x0408 (size: 0x10)
    TArray<class AActor*> Group1_Objectives;                                          // 0x0418 (size: 0x10)
    int32 Group1_BonusTime;                                                           // 0x0428 (size: 0x4)
    TArray<class AActor*> Group2_Objectives;                                          // 0x0430 (size: 0x10)
    TArray<class AActor*> Group3_Objectives;                                          // 0x0440 (size: 0x10)
    TArray<class AActor*> Group4_Objectives;                                          // 0x0450 (size: 0x10)
    int32 Group2_BonusTime;                                                           // 0x0460 (size: 0x4)
    int32 Group3_BonusTime;                                                           // 0x0464 (size: 0x4)
    int32 Group4_BonusTime;                                                           // 0x0468 (size: 0x4)
    int32 Group1_Count;                                                               // 0x046C (size: 0x4)
    int32 Group2_Count;                                                               // 0x0470 (size: 0x4)
    int32 Group3_Count;                                                               // 0x0474 (size: 0x4)
    int32 Group4_Count;                                                               // 0x0478 (size: 0x4)
    TArray<class AActor*> Group_Temp;                                                 // 0x0480 (size: 0x10)
    float CrashValue;                                                                 // 0x0490 (size: 0x4)
    class AFlight_StageController_S2_C* StageController;                              // 0x0498 (size: 0x8)
    bool ActiveAtStart;                                                               // 0x04A0 (size: 0x1)
    EFlightLevelTargetType Group1_Type;                                               // 0x04A1 (size: 0x1)
    EFlightLevelTargetType Group2_Type;                                               // 0x04A2 (size: 0x1)
    EFlightLevelTargetType Group3_Type;                                               // 0x04A3 (size: 0x1)
    EFlightLevelTargetType Group4_Type;                                               // 0x04A4 (size: 0x1)
    EFlightLevelResult flight result;                                                 // 0x04A5 (size: 0x1)
    bool Group1_Prev;                                                                 // 0x04A6 (size: 0x1)
    bool Group2_Prev;                                                                 // 0x04A7 (size: 0x1)
    bool Group3_Prev;                                                                 // 0x04A8 (size: 0x1)
    bool Group4__Prev;                                                                // 0x04A9 (size: 0x1)
    EInventoryType Flight Reward Type;                                                // 0x04AA (size: 0x1)
    float PlayerBestTime;                                                             // 0x04AC (size: 0x4)
    bool Success;                                                                     // 0x04B0 (size: 0x1)
    bool Inactive;                                                                    // 0x04B1 (size: 0x1)
    TArray<class AActor*> Group_Collected;                                            // 0x04B8 (size: 0x10)
    bool AllIn1_Prev;                                                                 // 0x04C8 (size: 0x1)
    int32 DebugIndex;                                                                 // 0x04CC (size: 0x4)
    FName WatchState;                                                                 // 0x04D0 (size: 0x8)

    void StateChangeHandler(class AActor* StateChangeActor);
    void 2_TestForWinCondition(bool& Test);
    void ResetPosition();
    void 2_TestForFailCondition(bool& Test);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void UI_Counter_Startup();
    void 2_MissionActive_Startup();
    void 2_MissionActive_Shutdown(bool Success);
    void UI_Counter_Shutdown();
    void UI_Timer_Startup();
    void UpdatePlace();
    void UpdateLap();
    void CheckBestTime();
    void End Race();
    void SuccessTheatricsDone();
    void LocalCleanup(bool Success);
    void PrintValues();
    void StateChangeEvent(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void SpyroSpin();
    void UI Counter Shutdown_DelayEvent();
    void ShowUI();
    void HideUI();
    void ExecuteUbergraph_Mission_Master_Flight_Race(int32 EntryPoint);
}; // Size: 0x4D8

#endif
