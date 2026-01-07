#ifndef UE4SS_SDK_BP_CES3056_GiantCrab_HPP
#define UE4SS_SDK_BP_CES3056_GiantCrab_HPP

class ABP_CES3056_GiantCrab_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* CheckForNoPoison;                                        // 0x09F8 (size: 0x8)
    class UCapsuleComponent* CheckForPoison;                                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnAwayFromPoison;            // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeAttackSnap;              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPath;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_ChargeTarget_Aggro;     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_ChargeTarget;           // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_DamageAltIdle;          // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_DamageIdle;             // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeTarget_Aggro;            // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* ClawRGib;                                             // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* BodyGib;                                              // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* Leg3Gib;                                              // 0x0A58 (size: 0x8)
    class UStaticMeshComponent* Leg2Gib;                                              // 0x0A60 (size: 0x8)
    class UStaticMeshComponent* Leg1Gib;                                              // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* ClawLGib;                                             // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_IdleAlt;                // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Scorch_Idle;                   // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleAlt;                       // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolWander;                  // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToPlayer;                  // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeTarget;                  // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0AB8 (size: 0x8)
    float Timeline_2_NewTrack_0_40D2DDC9454AC0BEE618C5AA66B63427;                     // 0x0AC0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_40D2DDC9454AC0BEE618C5AA66B63427; // 0x0AC4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0AC8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_CCD8F20549D68515D4764B8ED49E1297; // 0x0AD0 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0AD8 (size: 0x8)
    TArray<class UStaticMeshComponent*> ListOfCrabGibs;                               // 0x0AE0 (size: 0x10)
    TArray<float> ListOfCrabGibTimers;                                                // 0x0AF0 (size: 0x10)
    float DeathTimer;                                                                 // 0x0B00 (size: 0x4)
    TArray<FName> ListOfCrabGibs_AttachSockets;                                       // 0x0B08 (size: 0x10)
    TArray<FTransform> ListOfCrabGibs_AttachRelTransform;                             // 0x0B18 (size: 0x10)
    bool DeathSeqComplete;                                                            // 0x0B28 (size: 0x1)
    float turnTime;                                                                   // 0x0B2C (size: 0x4)
    FRotator poisonRotation;                                                          // 0x0B30 (size: 0xC)
    bool turning;                                                                     // 0x0B3C (size: 0x1)
    FVector turningOrigin;                                                            // 0x0B40 (size: 0xC)
    FBP_CES3056_GiantCrab_COnDeathStart OnDeathStart;                                 // 0x0B50 (size: 0x10)
    bool AllowHarmfulTerrainCheck;                                                    // 0x0B60 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void BndEvt__FalconEnemyState_ChargeTarget_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeTarget_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargeTarget_Aggro_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeTarget_Aggro_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Scorch_ChargeTarget_Aggro_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Scorch_ChargeTarget_Aggro_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Scorch_ChargeTarget_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Scorch_ChargeTarget_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnStartDeathSequence();
    void CheckForBlockers();
    void BndEvt__FalconEnemyState_TurnAwayFromPoison_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void StopTurning();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_CES3056_GiantCrab(int32 EntryPoint);
    void OnDeathStart__DelegateSignature();
}; // Size: 0xB61

#endif
