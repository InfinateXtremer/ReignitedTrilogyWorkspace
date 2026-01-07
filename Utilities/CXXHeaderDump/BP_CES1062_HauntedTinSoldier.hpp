#ifndef UE4SS_SDK_BP_CES1062_HauntedTinSoldier_HPP
#define UE4SS_SDK_BP_CES1062_HauntedTinSoldier_HPP

class ABP_CES1062_HauntedTinSoldier_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolDelay;                   // 0x09F8 (size: 0x8)
    class UCapsuleComponent* SleepingHitboxCapsule;                                   // 0x0A00 (size: 0x8)
    class UCapsuleComponent* HitboxCapsule;                                           // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* RightBoot;                                            // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* LeftBoot;                                             // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* RightHand;                                            // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* LeftHand;                                             // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* RightWrist;                                           // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* LeftWrist;                                            // 0x0A38 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* RightShoulder;                                        // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* LeftShoulder;                                         // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* Chest;                                                // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A78 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolWakeUp;                  // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolAsleep;                  // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WakeUp;                        // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Asleep;                        // 0x0AC0 (size: 0x8)
    FVector Grow_Shrink_Hitboxes_SleepingScale_97A820784353722634818AB4C3AACDB9;      // 0x0AC8 (size: 0xC)
    FVector Grow_Shrink_Hitboxes_HitboxScale_97A820784353722634818AB4C3AACDB9;        // 0x0AD4 (size: 0xC)
    float Grow_Shrink_Hitboxes_Accel_97A820784353722634818AB4C3AACDB9;                // 0x0AE0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Grow_Shrink_Hitboxes__Direction_97A820784353722634818AB4C3AACDB9; // 0x0AE4 (size: 0x1)
    class UTimelineComponent* Grow/Shrink Hitboxes;                                   // 0x0AE8 (size: 0x8)
    float AttackZRotation_ZRot_7F1C07EF45F0552181C3C48404453C42;                      // 0x0AF0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AttackZRotation__Direction_7F1C07EF45F0552181C3C48404453C42; // 0x0AF4 (size: 0x1)
    class UTimelineComponent* AttackZRotation;                                        // 0x0AF8 (size: 0x8)
    float WakeupTurnAnim_ZTurnRate_3B00DF7C414A924D011852BDE7A42EB2;                  // 0x0B00 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WakeupTurnAnim__Direction_3B00DF7C414A924D011852BDE7A42EB2; // 0x0B04 (size: 0x1)
    class UTimelineComponent* WakeupTurnAnim;                                         // 0x0B08 (size: 0x8)
    TArray<class UStaticMeshComponent*> ListofParts;                                  // 0x0B10 (size: 0x10)
    float SpyroToPartLength;                                                          // 0x0B20 (size: 0x4)
    FVector SpyroToPartNVec;                                                          // 0x0B24 (size: 0xC)
    float SpyroToPartZ;                                                               // 0x0B30 (size: 0x4)
    TArray<class UParticleSystemComponent*> SpawnedParticles;                         // 0x0B38 (size: 0x10)
    bool StartAwake;                                                                  // 0x0B48 (size: 0x1)
    FVector RandomAngularImpulse;                                                     // 0x0B4C (size: 0xC)
    FTimerHandle WakeupTimerHandle;                                                   // 0x0B58 (size: 0x8)
    FTransform PatrolStartTransform;                                                  // 0x0B60 (size: 0x30)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void WakeupTurnAnim__FinishedFunc();
    void WakeupTurnAnim__UpdateFunc();
    void WakeupTurnAnim__TurnOffPartCollisions__EventFunc();
    void AttackZRotation__FinishedFunc();
    void AttackZRotation__UpdateFunc();
    void Grow/Shrink Hitboxes__FinishedFunc();
    void Grow/Shrink Hitboxes__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_WakeUp_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WakeUp_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void On Component Hit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void WakeupTimer(float WakeUpInXSeconds);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_PatrolWakeUp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PatrolWakeUp_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void SecretAreaReset();
    void WakeUp();
    void ExecuteUbergraph_BP_CES1062_HauntedTinSoldier(int32 EntryPoint);
}; // Size: 0xB90

#endif
