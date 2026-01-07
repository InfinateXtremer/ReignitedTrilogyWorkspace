#ifndef UE4SS_SDK_BP_CBS2001_Crush_HPP
#define UE4SS_SDK_BP_CBS2001_Crush_HPP

class ABP_CBS2001_Crush_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* DeathAvalancheState;                            // 0x09F8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* SpyroDefeated;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricRoar2State;                             // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* TheatricRoar1State;                             // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* MoveInvincibleState;                            // 0x0A20 (size: 0x8)
    class UCapsuleComponent* MeleeCapsule;                                            // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* DeathLoopState;                                 // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* DeathTakeHitState;                              // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* DeathClub2State;                                // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* DeathClub1State;                                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* DeathChaseState;                                // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* CrushClub;                                            // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* ClubFaceState;                                  // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* TriggerChaseState;                              // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* StompFireball3State;                            // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* StompFireballFace2State;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* StompFireball2State;                            // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* StompFireballFace1State;                        // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* StompFireball1State;                            // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* StompArc3State;                                 // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* StompArcFace2State;                             // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* StompArc1State;                                 // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* StompArcFace1State;                             // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* StompArc2State;                                 // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* JumpFireball2State;                             // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* JumpFireballFaceState;                          // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* TakeHitFireState;                               // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* JumpArc2State;                                  // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* FaceArcState;                                   // 0x0AE0 (size: 0x8)
    class UFalconEnemyStateComponent* ChooseAttackTypeState;                          // 0x0AE8 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0AF0 (size: 0x8)
    class UFalconEnemyStateComponent* FindMoveTargetState;                            // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* ChaseState;                                     // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* JumpFireball1State;                             // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* AvalancheOutState;                              // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* AvalancheLoopState;                             // 0x0B18 (size: 0x8)
    class UFalconEnemyStateComponent* AvalancheTakeHItState;                          // 0x0B20 (size: 0x8)
    class UFalconEnemyStateComponent* ClubSmash2State;                                // 0x0B28 (size: 0x8)
    class UFalconEnemyStateComponent* ClubSmash1State;                                // 0x0B30 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0B38 (size: 0x8)
    class UFalconEnemyStateComponent* FaceRoarState;                                  // 0x0B40 (size: 0x8)
    class UFalconEnemyStateComponent* RoarState;                                      // 0x0B48 (size: 0x8)
    class UFalconEnemyStateComponent* JumpArc1State;                                  // 0x0B50 (size: 0x8)
    class UFalconEnemyStateComponent* MoveStartState;                                 // 0x0B58 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0B60 (size: 0x8)
    TArray<class AActor*> PhaseOne_CircleArray;                                       // 0x0B68 (size: 0x10)
    TArray<class AActor*> PhaseTwo_CircleArray;                                       // 0x0B78 (size: 0x10)
    TArray<class AActor*> PhaseThree_CircleArray;                                     // 0x0B88 (size: 0x10)
    TArray<class AActor*> SortLocationArray;                                          // 0x0B98 (size: 0x10)
    class AActor* MoveTarget;                                                         // 0x0BA8 (size: 0x8)
    bool IsRed;                                                                       // 0x0BB0 (size: 0x1)
    class ABP_CBS2001_Crush_C* CameraTarget;                                          // 0x0BB8 (size: 0x8)
    class UParticleSystemComponent* ShieldFX;                                         // 0x0BC0 (size: 0x8)
    TArray<class UParticleSystemComponent*> LightRayFX;                               // 0x0BC8 (size: 0x10)
    int32 Phase;                                                                      // 0x0BD8 (size: 0x4)
    bool MoveInvulnerable;                                                            // 0x0BDC (size: 0x1)
    bool SpyroDead?;                                                                  // 0x0BDD (size: 0x1)
    class UDecalComponent* ShadowDecal;                                               // 0x0BE0 (size: 0x8)
    bool ShieldActive;                                                                // 0x0BE8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    bool OnDealDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BndEvt__FindMoveTargetState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ChooseAttackState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__TriggerChaseState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveStartState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathLoopState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathTakeHItState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FaceRoarState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void Phase 1();
    void Phase 2();
    void Phase 3();
    void BndEvt__ClubSmash1State_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ClubSmash2State_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AvalancheTakeHItState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathTakeHItState_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__AvalancheOutState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveInvincibleState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__AvalancheLoopState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayerDead(class AActor* Actor, const FGameplayEventData Payload);
    void Player Ready();
    void BndEvt__ClubSmash2State_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__AvalancheTakeHItState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DeathClub2State_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__JumpFireball1State_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__JumpArc1State_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__JumpArc2State_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__JumpFireball2State_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathAvalancheState_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CBS2001_Crush(int32 EntryPoint);
}; // Size: 0xBE9

#endif
