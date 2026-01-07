#ifndef UE4SS_SDK_CES1047_GnorcDude_HPP
#define UE4SS_SDK_CES1047_GnorcDude_HPP

class ACES1047_GnorcDude_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* WaitingState;                                   // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* TrapFodderState;                                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeState;                                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A40 (size: 0x8)
    bool CageGnorc;                                                                   // 0x0A48 (size: 0x1)
    class AActor* MyCage;                                                             // 0x0A50 (size: 0x8)
    bool Chicken_Be_Free;                                                             // 0x0A58 (size: 0x1)
    class AActor* chicken;                                                            // 0x0A60 (size: 0x8)
    class AMission_Item_Base_StateMachine_C* TwigTrap;                                // 0x0A68 (size: 0x8)
    bool Dead_Gnorc;                                                                  // 0x0A70 (size: 0x1)

    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__ChargeState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Chicken Dead();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_CES1047_GnorcDude(int32 EntryPoint);
}; // Size: 0xA71

#endif
