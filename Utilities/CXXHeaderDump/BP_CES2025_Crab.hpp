#ifndef UE4SS_SDK_BP_CES2025_Crab_HPP
#define UE4SS_SDK_BP_CES2025_Crab_HPP

class ABP_CES2025_Crab_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* ShockVFX;                                         // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackUp;                      // 0x0A00 (size: 0x8)
    class UBoxComponent* UpwardAttackBox;                                             // 0x0A08 (size: 0x8)
    class UBoxComponent* ForwardAttackBox;                                            // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Leg3Gib;                                              // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* Leg2Gib;                                              // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* Leg1Gib;                                              // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* ClawLGib;                                             // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* ClawRGib;                                             // 0x0A38 (size: 0x8)
    class UStaticMeshComponent* BodyGib;                                              // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Zapped;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointRecovery;              // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointAttack;                // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointMover;                 // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander;                        // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A98 (size: 0x8)
    TArray<class UStaticMeshComponent*> ListOfCrabGibs;                               // 0x0AA0 (size: 0x10)
    TArray<float> ListOfCrabGibTimers;                                                // 0x0AB0 (size: 0x10)
    float DeathTimer;                                                                 // 0x0AC0 (size: 0x4)
    bool CanUpAttack;                                                                 // 0x0AC4 (size: 0x1)
    TArray<class UStaticMeshComponent*> ListOfCrabGibs_Big;                           // 0x0AC8 (size: 0x10)
    bool Dead;                                                                        // 0x0AD8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wander_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__UpwardAttackBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ForwardAttackBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Zapped_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void StartShockVFX();
    void ExecuteUbergraph_BP_CES2025_Crab(int32 EntryPoint);
}; // Size: 0xAD9

#endif
