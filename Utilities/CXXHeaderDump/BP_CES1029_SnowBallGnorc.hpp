#ifndef UE4SS_SDK_BP_CES1029_SnowBallGnorc_HPP
#define UE4SS_SDK_BP_CES1029_SnowBallGnorc_HPP

class ABP_CES1029_SnowBallGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UDeathCollisionManager_C* DeathCollisionManager;                            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XGuardedRecovery;              // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XGuardedPostAtkCheck;          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XGuardedAtk;                   // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XGuardedIdle;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XPostRecoverCheck;             // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XRecovery;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingPostAtkBackward;       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingPostAtkForward;        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingPostAtkCheck;          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingAtk;                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingBackward;              // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingForward;               // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingCheck;                 // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_XSeekingIdle;                  // 0x0A70 (size: 0x8)
    class UParticleSystemComponent* SnowballParticleEmitter;                          // 0x0A78 (size: 0x8)
    class UStaticMeshComponent* SnowballProp;                                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AA8 (size: 0x8)
    float SnowballShowHideProj_Scale_EA0A2A9C489E07316EF0649EAA734372;                // 0x0AB0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SnowballShowHideProj__Direction_EA0A2A9C489E07316EF0649EAA734372; // 0x0AB4 (size: 0x1)
    class UTimelineComponent* SnowballShowHideProj;                                   // 0x0AB8 (size: 0x8)
    bool ThrewSnowball;                                                               // 0x0AC0 (size: 0x1)
    class APhasmidTaggedTargetPoint* XTarget1;                                        // 0x0AC8 (size: 0x8)
    class APhasmidTaggedTargetPoint* XTarget2;                                        // 0x0AD0 (size: 0x8)
    class APhasmidTaggedTargetPoint* ClosestTargetToMe;                               // 0x0AD8 (size: 0x8)
    class APhasmidTaggedTargetPoint* ClosestTargetToSpyro;                            // 0x0AE0 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void SnowballShowHideProj__FinishedFunc();
    void SnowballShowHideProj__UpdateFunc();
    void SnowballShowHideProj__Show Snowball__EventFunc();
    void SnowballShowHideProj__Hide Snowball__EventFunc();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XSeekingCheck_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XSeekingPostAtkCheck_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XPostRecoverCheck_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XSeekingAtk_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XSeekingAtk_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_XGuardedPostAtkCheck_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_XGuardedAtk_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_XGuardedAtk_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void OnLaunchToDeath(class UFalconEnemyStateComponent* State Component);
    void ExecuteUbergraph_BP_CES1029_SnowBallGnorc(int32 EntryPoint);
}; // Size: 0xAE8

#endif
