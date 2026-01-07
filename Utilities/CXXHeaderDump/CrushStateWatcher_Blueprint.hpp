#ifndef UE4SS_SDK_CrushStateWatcher_Blueprint_HPP
#define UE4SS_SDK_CrushStateWatcher_Blueprint_HPP

class ACrushStateWatcher_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    class AActor* Crush;                                                              // 0x0328 (size: 0x8)
    FName EndState;                                                                   // 0x0330 (size: 0x8)
    class AActor* SpyroDamageWatcher_SkillPoint;                                      // 0x0338 (size: 0x8)
    class AActor* 208 Achievement;                                                    // 0x0340 (size: 0x8)
    class AActor* Ripto;                                                              // 0x0348 (size: 0x8)

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
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CrushStateWatcher_Blueprint(int32 EntryPoint);
}; // Size: 0x350

#endif
