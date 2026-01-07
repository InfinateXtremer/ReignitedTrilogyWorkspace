#ifndef UE4SS_SDK_BP_CNS2012_UmbrellaIdol_HPP
#define UE4SS_SDK_BP_CNS2012_UmbrellaIdol_HPP

class ABP_CNS2012_UmbrellaIdol_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToTarget;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Dance;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A18 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionReset(class AActor* RequestActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void ExecuteUbergraph_BP_CNS2012_UmbrellaIdol(int32 EntryPoint);
}; // Size: 0xA20

#endif
