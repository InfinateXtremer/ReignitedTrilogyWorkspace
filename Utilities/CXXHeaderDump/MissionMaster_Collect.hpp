#ifndef UE4SS_SDK_MissionMaster_Collect_HPP
#define UE4SS_SDK_MissionMaster_Collect_HPP

class AMissionMaster_Collect_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    int32 MissionValue;                                                               // 0x03A0 (size: 0x4)
    TArray<class AActor*> NotifyActors;                                               // 0x03A8 (size: 0x10)
    TArray<class AActor*> ObjectiveActors;                                            // 0x03B8 (size: 0x10)
    TArray<class AActor*> ObjectiveActors_Local;                                      // 0x03C8 (size: 0x10)
    int32 StartThresholdVal;                                                          // 0x03D8 (size: 0x4)
    int32 StartThresholdCurrent;                                                      // 0x03DC (size: 0x4)
    FName ObjSuccessState;                                                            // 0x03E0 (size: 0x8)
    FName ObjFailState;                                                               // 0x03E8 (size: 0x8)
    bool RemoveObjActorsFromCounter;                                                  // 0x03F0 (size: 0x1)
    bool MissionFailed;                                                               // 0x03F1 (size: 0x1)
    bool No UI;                                                                       // 0x03F2 (size: 0x1)
    class AActor* RequestingActor;                                                    // 0x03F8 (size: 0x8)
    bool InformObjectivesViaUpdate;                                                   // 0x0400 (size: 0x1)
    bool ActiveMission;                                                               // 0x0401 (size: 0x1)
    TArray<FName> ObjSuccessStateList;                                                // 0x0408 (size: 0x10)
    bool SuccessStateListCheck;                                                       // 0x0418 (size: 0x1)
    bool ValidateObjectivesAtStart;                                                   // 0x0419 (size: 0x1)

    void 2_TestForFailCondition(bool& Test);
    void 2_TestForWinCondition(bool& Test);
    void 1_TestForStartCondition(bool& Test);
    void StateChangeHandler(class AActor*& Actor, class UFalconEnemyStateComponent* StateComponent);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void 2_MissionActive_Startup();
    void 2_MissionActive_Shutdown(bool Success);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void CleanNotifyActors();
    void MissionSetup(bool Active);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MM_PlayerReady();
    void ExecuteUbergraph_MissionMaster_Collect(int32 EntryPoint);
}; // Size: 0x41A

#endif
