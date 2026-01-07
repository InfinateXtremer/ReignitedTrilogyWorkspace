#ifndef UE4SS_SDK_CES1052_ElectroGnorc_HPP
#define UE4SS_SDK_CES1052_ElectroGnorc_HPP

class ACES1052_ElectroGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A10 (size: 0x8)
    class ACES1052_ElectroField_C* ElectroField;                                      // 0x0A18 (size: 0x8)
    class ABP_ChickenZapper_C* ChickenZapper;                                         // 0x0A20 (size: 0x8)

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
    void ZapFodder();
    void ElectroNotify();
    void ExecuteUbergraph_CES1052_ElectroGnorc(int32 EntryPoint);
}; // Size: 0xA28

#endif
