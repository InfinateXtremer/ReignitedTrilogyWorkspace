#ifndef UE4SS_SDK_Mission_Master_BaseClass_HPP
#define UE4SS_SDK_Mission_Master_BaseClass_HPP

class AMission_Master_BaseClass_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* ChildText;                                            // 0x0320 (size: 0x8)
    class UTextRenderComponent* MM_Text;                                              // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    TEnumAsByte<Mission_Enum::Type> MissionEnum;                                      // 0x0338 (size: 0x1)
    int32 UI_CounterMax;                                                              // 0x033C (size: 0x4)
    int32 UI_CounterCurrent;                                                          // 0x0340 (size: 0x4)
    int32 UI_TimerValue;                                                              // 0x0344 (size: 0x4)
    int32 UI_TimerCurrent;                                                            // 0x0348 (size: 0x4)
    TEnumAsByte<EHudPosition::Type> UI_TimerPos;                                      // 0x034C (size: 0x1)
    int32 UI_OffDistance;                                                             // 0x0350 (size: 0x4)
    FString UI_CounterName;                                                           // 0x0358 (size: 0x10)
    float UI_CounterHide;                                                             // 0x0368 (size: 0x4)
    TEnumAsByte<EHudPosition::Type> UI_CounterPos;                                    // 0x036C (size: 0x1)
    bool UI_HideCounterAtStart;                                                       // 0x036D (size: 0x1)
    FName SaveGame_Name;                                                              // 0x0370 (size: 0x8)
    bool SaveGame_Complete;                                                           // 0x0378 (size: 0x1)
    float DebugEndDelay;                                                              // 0x037C (size: 0x4)
    bool DebugEndSuccess;                                                             // 0x0380 (size: 0x1)
    bool UI_Counter_Created;                                                          // 0x0381 (size: 0x1)
    int32 UI_OffDistance_State;                                                       // 0x0384 (size: 0x4)
    bool Suspended;                                                                   // 0x0388 (size: 0x1)
    bool UI_Timer_Created;                                                            // 0x0389 (size: 0x1)
    bool UI_FailOnUIDistance;                                                         // 0x038A (size: 0x1)
    bool UI_DontShowDenominator;                                                      // 0x038B (size: 0x1)
    int32 UI_DenominatorTemp;                                                         // 0x038C (size: 0x4)
    float UI_CounterShutdownDelay;                                                    // 0x0390 (size: 0x4)

    void UI_GetDenominator();
    void UI_DistanceControl();
    void 2_MissionActive_Startup();
    void 3_MissionComplete_Shutdown();
    void 3_MissionComplete_Startup();
    void UI_Counter_Update(int32 CounterVal);
    void UI_Counter_Shutdown();
    void UI_Counter_Startup();
    void UI_Timer_Shutdown();
    void UI_Timer_Startup();
    void 2_TestForFailCondition(bool& Test);
    void 2_TestForWinCondition(bool& Test);
    void 1_TestForStartCondition(bool& Test);
    void 2_MissionActive_Shutdown(bool Success);
    void 3_MissionComplete();
    void 2_MissionActive();
    void 1_PreMissionState();
    void 1_PreMission_Startup();
    void 1_PreMission_Shutdown();
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void CounterDelay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void UI Counter Shutdown_DelayEvent();
    void MM_PlayerReady();
    void ExecuteUbergraph_Mission_Master_BaseClass(int32 EntryPoint);
}; // Size: 0x394

#endif
