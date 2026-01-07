#ifndef UE4SS_SDK_Puck_HPP
#define UE4SS_SDK_Puck_HPP

class APuck_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Inactive;                                       // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_GoalEnemy;                                      // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_GoalSpyro;                                      // 0x04A0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_EnemyGrabbed;                                   // 0x04B0 (size: 0x8)
    class UBP_StateComponent_C* State_PlayerGrabbed;                                  // 0x04B8 (size: 0x8)
    class UFalconAIMovementCoordinator* FalconAIMovementCoordinator;                  // 0x04C0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x04C8 (size: 0x8)
    float Timeline_1_Z_Addition_519340804AFEA2B300DB6CAE93E0AC66;                     // 0x04D0 (size: 0x4)
    float Timeline_1_Distance_519340804AFEA2B300DB6CAE93E0AC66;                       // 0x04D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_519340804AFEA2B300DB6CAE93E0AC66; // 0x04D8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04E0 (size: 0x8)
    float PuckEatenTimeline_Scale_2A2C872E4D53651E94A2C8839E49E69C;                   // 0x04E8 (size: 0x4)
    float PuckEatenTimeline_Vertical_2A2C872E4D53651E94A2C8839E49E69C;                // 0x04EC (size: 0x4)
    float PuckEatenTimeline_Vector_2A2C872E4D53651E94A2C8839E49E69C;                  // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PuckEatenTimeline__Direction_2A2C872E4D53651E94A2C8839E49E69C; // 0x04F4 (size: 0x1)
    class UTimelineComponent* PuckEatenTimeline;                                      // 0x04F8 (size: 0x8)
    float PuckBounce_NewTrack_1_F13F928B4550139C154C2F80E276F0F8;                     // 0x0500 (size: 0x4)
    float PuckBounce_NewTrack_0_F13F928B4550139C154C2F80E276F0F8;                     // 0x0504 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PuckBounce__Direction_F13F928B4550139C154C2F80E276F0F8; // 0x0508 (size: 0x1)
    class UTimelineComponent* PuckBounce;                                             // 0x0510 (size: 0x8)
    float Z_Position;                                                                 // 0x0518 (size: 0x4)
    bool Grabbed;                                                                     // 0x051C (size: 0x1)
    bool HoldPlayerPos;                                                               // 0x051D (size: 0x1)
    class AActor* HoldingActor;                                                       // 0x0520 (size: 0x8)
    class AActor* EnemyActor;                                                         // 0x0528 (size: 0x8)
    bool PlayerGrab;                                                                  // 0x0530 (size: 0x1)
    class ABP_SpitItem_204_C* SpitItemDummy;                                          // 0x0538 (size: 0x8)
    class UParticleSystemComponent* TrailParticle;                                    // 0x0540 (size: 0x8)
    float Displace;                                                                   // 0x0548 (size: 0x4)
    bool AltStartPointActive;                                                         // 0x054C (size: 0x1)
    class ABP_CPS1999_Playable_C* SpyroRef;                                           // 0x0550 (size: 0x8)
    FVector WorldVector;                                                              // 0x0558 (size: 0xC)
    FVector StartPosition;                                                            // 0x0564 (size: 0xC)
    class UStaticMeshComponent* FakePuck;                                             // 0x0570 (size: 0x8)
    FVector VelocityPrev;                                                             // 0x0578 (size: 0xC)
    FRotator StartRotation;                                                           // 0x0584 (size: 0xC)
    class AActor* AltStartPoint;                                                      // 0x0590 (size: 0x8)
    class AActor* BrotherKipp;                                                        // 0x0598 (size: 0x8)
    class AActor* OutOfPlay;                                                          // 0x05A0 (size: 0x8)

    void UserConstructionScript();
    void PuckBounce__FinishedFunc();
    void PuckBounce__UpdateFunc();
    void PuckEatenTimeline__FinishedFunc();
    void PuckEatenTimeline__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_PlayerGrabbed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_EnemyGrabbed_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void EnemyPlayerStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void PuckShoot();
    void PlayerShoot();
    void PlayerChecked(float Heading);
    void PlayerGetsPuck();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ResetGate();
    void PuckRestart();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_Inactive_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_Puck(int32 EntryPoint);
}; // Size: 0x5A8

#endif
