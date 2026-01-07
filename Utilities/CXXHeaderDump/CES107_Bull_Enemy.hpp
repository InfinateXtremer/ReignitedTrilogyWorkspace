#ifndef UE4SS_SDK_CES107_Bull_Enemy_HPP
#define UE4SS_SDK_CES107_Bull_Enemy_HPP

class ACES107_Bull_Enemy_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class USphereComponent* HeadCollision;                                            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* AttackCircleCDState;                            // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* StuckLoopState;                                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* AttackCircleState;                              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* CircleState;                                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* AttackOriginCDState;                            // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AttackDestinationCDState;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* AttackOriginState;                              // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* AttackDestinationState;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolTurnDestinationState;                     // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolTurnOriginState;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolOriginState;                              // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolDestinationState;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* OriginState;                                    // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* DeathChargeState;                               // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeStuckState;                               // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeState;                                    // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A90 (size: 0x8)
    float Ease_Up_Turnrate_Ramp_up_E1D521CE49439F81F8E1C4BD4FFC04AF;                  // 0x0A98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Ease_Up_Turnrate__Direction_E1D521CE49439F81F8E1C4BD4FFC04AF; // 0x0A9C (size: 0x1)
    class UTimelineComponent* Ease Up Turnrate;                                       // 0x0AA0 (size: 0x8)
    bool Stuck;                                                                       // 0x0AA8 (size: 0x1)
    class ABP_CES1008_BulltamingGnorc_C* BulltamingGnorc;                             // 0x0AB0 (size: 0x8)
    class UPhasmidCharacterMovementComponent* PhasmidCharacterMovement;               // 0x0AB8 (size: 0x8)
    float DefaultCarTurnRate;                                                         // 0x0AC0 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Ease Up Turnrate__FinishedFunc();
    void Ease Up Turnrate__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__ChargeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ChargeStuckState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__OriginState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__OriginState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CES107_Bull_Enemy(int32 EntryPoint);
}; // Size: 0xAC4

#endif
