#ifndef UE4SS_SDK_CES1044_Gunner_HPP
#define UE4SS_SDK_CES1044_Gunner_HPP

class ACES1044_Gunner_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* WaitToMoveState;                                // 0x09F8 (size: 0x8)
    class UChildActorComponent* AttackTarget;                                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A28 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0A30 (size: 0x8)
    float SpyroLastKnownZ;                                                            // 0x0A38 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CES1044_Gunner(int32 EntryPoint);
}; // Size: 0xA3C

#endif
