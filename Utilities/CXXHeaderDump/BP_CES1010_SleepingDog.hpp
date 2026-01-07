#ifndef UE4SS_SDK_BP_CES1010_SleepingDog_HPP
#define UE4SS_SDK_BP_CES1010_SleepingDog_HPP

class ABP_CES1010_SleepingDog_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x09F8 (size: 0x8)
    class UCapsuleComponent* CombatCapsuleMiddle;                                     // 0x0A00 (size: 0x8)
    class UCapsuleComponent* CombatCapsuleFront;                                      // 0x0A08 (size: 0x8)
    class UCapsuleComponent* CombatCapsuleBack;                                       // 0x0A10 (size: 0x8)
    class UFlopCollisionManager_C* FlopCollisionManager;                              // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedReturnFacing;            // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnFacing;                  // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedAttackOut;               // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackOut;                     // 0x0A38 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit;                       // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedRecovery;                // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedReturn;                  // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedFaceOrigin;              // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedAttack;                  // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedFacePlayer;              // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SingedIdle;                    // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FaceOrigin;                    // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FacePlayer;                    // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AB0 (size: 0x8)
    float OriginalFacing;                                                             // 0x0AB8 (size: 0x4)
    float CurrentFacing;                                                              // 0x0ABC (size: 0x4)
    float TargetFacing;                                                               // 0x0AC0 (size: 0x4)
    float Time;                                                                       // 0x0AC4 (size: 0x4)
    bool Rotate?;                                                                     // 0x0AC8 (size: 0x1)
    FVector originalLocation;                                                         // 0x0ACC (size: 0xC)
    float RotationSpeed;                                                              // 0x0AD8 (size: 0x4)
    class AActor* SpyroLocationTarget;                                                // 0x0AE0 (size: 0x8)
    FRotator InitialRotationRate;                                                     // 0x0AE8 (size: 0xC)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Recovery_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FaceOrigin_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SingedFaceOrigin_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_FacePlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_SingedFacePlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_SingedAttack_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SingedRecovery_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SingedAttack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ReturnFacing_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SingedReturnFacing_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SingedReturn_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_SingedAttackOut_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_AttackOut_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_SingedReturn_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1010_SleepingDog(int32 EntryPoint);
}; // Size: 0xAF4

#endif
