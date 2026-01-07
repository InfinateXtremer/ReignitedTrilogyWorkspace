#ifndef UE4SS_SDK_BeginFightTrigger_HPP
#define UE4SS_SDK_BeginFightTrigger_HPP

class ABeginFightTrigger_C : public ATriggerSphere
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class AActor* Boss;                                                               // 0x0328 (size: 0x8)
    bool Active;                                                                      // 0x0330 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PlayerReady();
    void ExecuteUbergraph_BeginFightTrigger(int32 EntryPoint);
}; // Size: 0x331

#endif
