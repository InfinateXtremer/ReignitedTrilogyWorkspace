#ifndef UE4SS_SDK_BP_CES1045_ThiefRed_HPP
#define UE4SS_SDK_BP_CES1045_ThiefRed_HPP

class ABP_CES1045_ThiefRed_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* StartTauntState;                                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* ChangeFleeValuesState;                          // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* HeldItem;                                             // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* WakeState;                                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* CircleTauntState;                               // 0x0A18 (size: 0x8)
    class USuperchargeManager_C* SuperchargeManager;                                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FleeCircleIdleState;                            // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FleeCircleState;                                // 0x0A30 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* AlertState;                                     // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* TauntState;                                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A60 (size: 0x8)
    float ChangeMinSpeed;                                                             // 0x0A68 (size: 0x4)
    float ChangeMaxSpeed;                                                             // 0x0A6C (size: 0x4)
    float ChangeInitialDesiredDistance;                                               // 0x0A70 (size: 0x4)
    float ChangeFinalDistance;                                                        // 0x0A74 (size: 0x4)
    float ChangeAccelerationFactor;                                                   // 0x0A78 (size: 0x4)
    float ChangeShiftTime;                                                            // 0x0A7C (size: 0x4)
    bool ResetChaseTime;                                                              // 0x0A80 (size: 0x1)
    class UParticleSystemComponent* OrbVFX;                                           // 0x0A88 (size: 0x8)
    float InitialMinSpeed;                                                            // 0x0A90 (size: 0x4)
    class ATargetPoint* TeleportLocation;                                             // 0x0A98 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__ChangeFleeValuesState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeCircleState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeCircleState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void Player Ready();
    void ExecuteUbergraph_BP_CES1045_ThiefRed(int32 EntryPoint);
}; // Size: 0xAA0

#endif
