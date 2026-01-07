#ifndef UE4SS_SDK_Mission_Master_OnUpdate_HPP
#define UE4SS_SDK_Mission_Master_OnUpdate_HPP

class AMission_Master_OnUpdate_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    int32 StartValue;                                                                 // 0x03A0 (size: 0x4)
    int32 StartValue_Current;                                                         // 0x03A4 (size: 0x4)
    int32 MissionValue;                                                               // 0x03A8 (size: 0x4)
    int32 MissionValue_Current;                                                       // 0x03AC (size: 0x4)
    TArray<class AActor*> ReportActors;                                               // 0x03B0 (size: 0x10)
    bool Failed;                                                                      // 0x03C0 (size: 0x1)
    bool AllowLevelStartUpdate;                                                       // 0x03C1 (size: 0x1)
    float LevelStartDelayTimer;                                                       // 0x03C4 (size: 0x4)
    bool LevelStartFinished;                                                          // 0x03C8 (size: 0x1)

    void 2_TestForFailCondition(bool& Test);
    void 2_TestForWinCondition(bool& Test);
    void 1_TestForStartCondition(bool& Test);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void 2_MissionActive_Startup();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void 2_MissionActive_Shutdown(bool Success);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionSuspend(bool Suspend);
    void PlayerReady();
    void LateUIUpdate();
    void ExecuteUbergraph_Mission_Master_OnUpdate(int32 EntryPoint);
}; // Size: 0x3C9

#endif
