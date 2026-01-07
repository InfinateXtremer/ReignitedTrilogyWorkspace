#ifndef UE4SS_SDK_BP_LS219_SkillPointWatcher_HPP
#define UE4SS_SDK_BP_LS219_SkillPointWatcher_HPP

class ABP_LS219_SkillPointWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    ESkillPoint skillPoint;                                                           // 0x0328 (size: 0x1)
    bool DidSpyroTakeDamage;                                                          // 0x0329 (size: 0x1)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void OnTakeDamage(class AActor* Actor, const FGameplayEventData Payload);
    void Player Ready();
    void ExecuteUbergraph_BP_LS219_SkillPointWatcher(int32 EntryPoint);
}; // Size: 0x32A

#endif
