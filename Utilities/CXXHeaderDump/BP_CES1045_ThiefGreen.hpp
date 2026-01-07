#ifndef UE4SS_SDK_BP_CES1045_ThiefGreen_HPP
#define UE4SS_SDK_BP_CES1045_ThiefGreen_HPP

class ABP_CES1045_ThiefGreen_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* RespawnWaitState;                               // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* ReverseFleeState;                               // 0x0A00 (size: 0x8)
    class USuperchargeManager_C* SuperchargeManager;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* ChangeFleeValuesState;                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* WakeState;                                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* CircleTauntState;                               // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FleeTauntState;                                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FleeFromTargetIdleState;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FleeFromTargetState;                            // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* Deactivated;                                    // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* LedgeIdle;                                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* LedgeTaunt;                                     // 0x0A50 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0A58 (size: 0x8)
    class UStaticMeshComponent* Key;                                                  // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* AlertState;                                     // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* TauntState;                                     // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A88 (size: 0x8)
    class ATriggerBox* LedgeVolume;                                                   // 0x0A90 (size: 0x8)
    bool SpyroInVolume;                                                               // 0x0A98 (size: 0x1)
    bool HideKey;                                                                     // 0x0A99 (size: 0x1)
    float ChangeMinSpeed;                                                             // 0x0A9C (size: 0x4)
    float ChangeMaxSpeed;                                                             // 0x0AA0 (size: 0x4)
    float ChangeInitialDesiredDistance;                                               // 0x0AA4 (size: 0x4)
    float ChangeFinalDistance;                                                        // 0x0AA8 (size: 0x4)
    float ChangeAccelerationFactor;                                                   // 0x0AAC (size: 0x4)
    float ChangeShiftTime;                                                            // 0x0AB0 (size: 0x4)
    bool ResetChaseTime;                                                              // 0x0AB4 (size: 0x1)
    FPhasmidSoftReference Dragon1;                                                    // 0x0AB8 (size: 0x28)
    class ATargetPoint* TeleportLocation;                                             // 0x0AE0 (size: 0x8)
    FPhasmidSoftReference Dragon2;                                                    // 0x0AE8 (size: 0x28)
    FPhasmidSoftReference Dragon3;                                                    // 0x0B10 (size: 0x28)
    bool preventLootCheckProp?;                                                       // 0x0B38 (size: 0x1)
    class UParticleSystemComponent* OrbVFX;                                           // 0x0B40 (size: 0x8)
    float InitialMinSpeed;                                                            // 0x0B48 (size: 0x4)

    void UserConstructionScript();
    void BndEvt__LedgeVolume_K2Node_ComponentBoundEvent_0_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__LedgeVolume_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FleeFromTargetState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeFromTargetState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__ChangeFleeValuesState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Player Ready();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__ReverseFleeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ReverseFleeState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__AlertState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1045_ThiefGreen(int32 EntryPoint);
}; // Size: 0xB4C

#endif
