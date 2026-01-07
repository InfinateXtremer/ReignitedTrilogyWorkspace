#ifndef UE4SS_SDK_BP_CES2017_ColossusYeti_HPP
#define UE4SS_SDK_BP_CES2017_ColossusYeti_HPP

class ABP_CES2017_ColossusYeti_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyStat_Cutscene2;                      // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cutscene;                      // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A10 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
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
    void ExecuteUbergraph_BP_CES2017_ColossusYeti(int32 EntryPoint);
}; // Size: 0xA18

#endif
