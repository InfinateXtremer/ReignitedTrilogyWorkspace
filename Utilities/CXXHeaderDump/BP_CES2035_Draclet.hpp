#ifndef UE4SS_SDK_BP_CES2035_Draclet_HPP
#define UE4SS_SDK_BP_CES2035_Draclet_HPP

class ABP_CES2035_Draclet_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnOtherBuddyHanging;        // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnBuddyHanging;             // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOrigin2Hanging;          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOtherBuddyHanging;       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOriginHanging;           // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToBuddyHanging;            // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HangingIdle;                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOrigin2;                 // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnOtherBuddy;               // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOtherBuddy;              // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnFromSpit;                 // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* LaunchPoint;                                          // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnBuddy;                    // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToOrigin;                  // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToBuddy;                   // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hidden;                        // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FakeDeath;                     // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Walking;                       // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A90 (size: 0x8)
    float Timeline_4_NewTrack_0_1B701CB34913B36B7B350FB05216BF1B;                     // 0x0A98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_1B701CB34913B36B7B350FB05216BF1B; // 0x0A9C (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x0AA0 (size: 0x8)
    float Timeline_3_NewTrack_0_DF9AC96F431D335A03A08A8D702447D1;                     // 0x0AA8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_DF9AC96F431D335A03A08A8D702447D1; // 0x0AAC (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0AB0 (size: 0x8)
    float Timeline_2_NewTrack_0_81DA41DE4875F92862C66C9E373D4531;                     // 0x0AB8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_81DA41DE4875F92862C66C9E373D4531; // 0x0ABC (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0AC0 (size: 0x8)
    float Timeline_0_0_NewTrack_0_5E79FF294563CDB5B9BB7FB70881C07A;                   // 0x0AC8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_5E79FF294563CDB5B9BB7FB70881C07A; // 0x0ACC (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0AD0 (size: 0x8)
    bool Dead;                                                                        // 0x0AD8 (size: 0x1)
    bool IHaveWaypoints;                                                              // 0x0AD9 (size: 0x1)
    FVector MyOrigin;                                                                 // 0x0ADC (size: 0xC)
    class ABP_CES2035_Draclet_C* MyBuddy;                                             // 0x0AE8 (size: 0x8)
    class APhasmidProjectileActor* MyProjectile;                                      // 0x0AF0 (size: 0x8)
    class ABP_CES2035_Draclet_C* MyOtherBuddy;                                        // 0x0AF8 (size: 0x8)
    bool HaveWeb;                                                                     // 0x0B00 (size: 0x1)
    float InitialFacing;                                                              // 0x0B04 (size: 0x4)
    class ABP_Web_C* MyWeb;                                                           // 0x0B08 (size: 0x8)
    FRotator CurrentRotation;                                                         // 0x0B10 (size: 0xC)
    FRotator IntialRot;                                                               // 0x0B1C (size: 0xC)
    bool Attached;                                                                    // 0x0B28 (size: 0x1)
    class UObject* MyHitVolume;                                                       // 0x0B30 (size: 0x8)
    bool Hidden;                                                                      // 0x0B38 (size: 0x1)
    bool Buddy1_IsDead;                                                               // 0x0B39 (size: 0x1)
    bool Buddy2_IsDead;                                                               // 0x0B3A (size: 0x1)
    bool Turning1;                                                                    // 0x0B3B (size: 0x1)
    bool Turning2;                                                                    // 0x0B3C (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__FalconEnemyState_SpawnFromSpit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOtherBuddy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpawnOtherBuddy_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOrigin2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToBuddyHanging_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOriginHanging_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpawnBuddyHanging_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOtherBuddyHanging_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOrigin2Hanging_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpawnOtherBuddyHanging_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpawnBuddy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Reset();
    void BndEvt__FalconEnemyState_Walking_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToOrigin_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Hidden_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void StateChangeBuddy1(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void StateChangeBuddy2(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TurnToBuddy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Check Dead();
    void BndEvt__FalconEnemyState_HangingIdle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Hidden_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BP_CES2035_Draclet(int32 EntryPoint);
}; // Size: 0xB3D

#endif
