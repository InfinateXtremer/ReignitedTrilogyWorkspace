#ifndef UE4SS_SDK_BP_CES2033_IceWizard_HPP
#define UE4SS_SDK_BP_CES2033_IceWizard_HPP

class ABP_CES2033_IceWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_IceWizard_Body;                            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitBeforeTurnBack;            // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnBackToEnemy;               // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitReactWait;                  // 0x0A10 (size: 0x8)
    class UChildActorComponent* CenterTarget;                                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RangedAtNPC;                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackHitReact;             // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PrePreAttack;                  // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleWaitingToBeHit;            // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RangedAtEnemy;                 // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitReact;                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RangedAtPlayer;                // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A78 (size: 0x8)
    class ABP_CES2033_IceWizard_C* MySnowballBuddy;                                   // 0x0A80 (size: 0x8)
    bool FiringInstigator;                                                            // 0x0A88 (size: 0x1)
    class ATriggerBase* MyCollisionVolume;                                            // 0x0A90 (size: 0x8)
    bool IsAlerted;                                                                   // 0x0A98 (size: 0x1)
    TArray<class ABP_211_Eskimo_BASE_C*> NPCTargets;                                  // 0x0AA0 (size: 0x10)
    class ABP_TargetHelper_C* EnemyTarget;                                            // 0x0AB0 (size: 0x8)
    class ABP_211_Eskimo_BASE_C* NPC_Target;                                          // 0x0AB8 (size: 0x8)
    class AActor* TargetRef;                                                          // 0x0AC0 (size: 0x8)
    bool doSafeSpotLogic?;                                                            // 0x0AC8 (size: 0x1)
    class ATriggerBox* safeSpotVolume;                                                // 0x0AD0 (size: 0x8)
    EProjectileLobType LobType;                                                       // 0x0AD8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_HitReact_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleWaitingToBeHit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttackHitReact_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void 211 - Unfrozen NPC Event(class ABP_211_Eskimo_BASE_C* Freed NPC);
    void BndEvt__FalconEnemyState_PreAttack_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RangedAtEnemy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RangedAtPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RangedAtNPC_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES2033_IceWizard(int32 EntryPoint);
}; // Size: 0xAD9

#endif
