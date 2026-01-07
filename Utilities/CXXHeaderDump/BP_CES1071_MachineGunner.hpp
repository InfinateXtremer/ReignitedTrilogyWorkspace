#ifndef UE4SS_SDK_BP_CES1071_MachineGunner_HPP
#define UE4SS_SDK_BP_CES1071_MachineGunner_HPP

class ABP_CES1071_MachineGunner_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleNoTimer;                   // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* GunSmoke;                                         // 0x0A00 (size: 0x8)
    class UChildActorComponent* AttackTarget;                                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunStop;                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Run;                           // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitToPatrol;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A40 (size: 0x8)
    float SpyroLastKnownZ;                                                            // 0x0A48 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Ranged_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Ranged_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1071_MachineGunner(int32 EntryPoint);
}; // Size: 0xA4C

#endif
