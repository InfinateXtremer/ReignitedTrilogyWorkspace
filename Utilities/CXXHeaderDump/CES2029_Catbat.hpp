#ifndef UE4SS_SDK_CES2029_Catbat_HPP
#define UE4SS_SDK_CES2029_Catbat_HPP

class ACES2029_Catbat_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* JustSpawnedState;                               // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownClockwiseState;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownCounterClockwiseState;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* AttackClockwiseState;                           // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* AttackCounterClockwiseState;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* SplineTrifectaIdleState;                        // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* SplineTrifectaState;                            // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* SplineDestinationIdle;                          // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* SplineDestinationState;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* ShootClockwiseState;                            // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* WaitShootClockwiseState;                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* ChaseClockwiseState;                            // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* ShootCounterClockwiseState;                     // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* WaitShootCounterClockwiseState;                 // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownTrifectaState;                          // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* AttackTrifectaState;                            // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* IdleTrifectaState;                              // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* MoveTrifectaState;                              // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* SetMoveTrifectaState;                           // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* ChaseCounterClockwiseState;                     // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* SetIdleState;                                   // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* SetLandingState;                                // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* IdleOriginState;                                // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* MoveOriginState;                                // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* MoveDestinationState;                           // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FlyingToIdleState;                              // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* LandingState;                                   // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* TakeOffState;                                   // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* GroundIdleState;                                // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* FireTriggerState;                               // 0x0AE0 (size: 0x8)
    class UFalconEnemyStateComponent* AttackDestinationState;                         // 0x0AE8 (size: 0x8)
    class UFalconEnemyStateComponent* AttackOriginState;                              // 0x0AF0 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownDestinationState;                       // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownOriginState;                            // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* IdleDestinationState;                           // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* SetMoveDestinationState;                        // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolState;                                    // 0x0B18 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0B20 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0B28 (size: 0x8)
    class UFalconEnemyStateComponent* FireDeathState;                                 // 0x0B30 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0B38 (size: 0x8)
    class UFalconEnemyStateComponent* SetMoveOriginState;                             // 0x0B40 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0B48 (size: 0x8)
    bool FireDamage;                                                                  // 0x0B50 (size: 0x1)
    class AActor* SkillPointWatcher;                                                  // 0x0B58 (size: 0x8)
    class AMovementDummy_C* MovementDummy;                                            // 0x0B60 (size: 0x8)
    class ATargetPoint* MoveOrigin;                                                   // 0x0B68 (size: 0x8)
    class ATargetPoint* MoveDestination;                                              // 0x0B70 (size: 0x8)
    class ATargetPoint* MoveTrifecta;                                                 // 0x0B78 (size: 0x8)
    float FlightHeight;                                                               // 0x0B80 (size: 0x4)
    bool LocationIsOrigin;                                                            // 0x0B84 (size: 0x1)
    bool Patrol;                                                                      // 0x0B85 (size: 0x1)
    int32 LocationIndex;                                                              // 0x0B88 (size: 0x4)
    float LandHeight;                                                                 // 0x0B8C (size: 0x4)
    float TakeOffHeight;                                                              // 0x0B90 (size: 0x4)
    bool Floater;                                                                     // 0x0B94 (size: 0x1)

    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__SetMoveOriginState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SetMoveDestinationState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__SetLandingState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SetIdleState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveDestinationState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveOriginState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SetMoveTrifectaState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveTrifectaState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__GroundIdleState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__JustSpawnedState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Player Ready();
    void ExecuteUbergraph_CES2029_Catbat(int32 EntryPoint);
}; // Size: 0xB95

#endif
