#ifndef UE4SS_SDK_105_Plane_HPP
#define UE4SS_SDK_105_Plane_HPP

class A105_Plane_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UChildActorComponent* Plane;                                                // 0x0488 (size: 0x8)
    class UParticleSystemComponent* PS_Plane_Exhaust_R;                               // 0x0490 (size: 0x8)
    class UParticleSystemComponent* PS_Plane_Exhaust_L;                               // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Active;                                         // 0x04A0 (size: 0x8)
    class UAkComponent* AkPilot;                                                      // 0x04A8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04B0 (size: 0x8)
    class UCapsuleComponent* Capsule2;                                                // 0x04B8 (size: 0x8)
    class UBP_StateComponent_C* State_Fall;                                           // 0x04C0 (size: 0x8)
    class UBP_StateComponent_C* State_Alert;                                          // 0x04C8 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x04D0 (size: 0x8)
    class USkeletalMeshComponent* Pilot;                                              // 0x04D8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> FlightMovement__Direction_B0C2DC104AFC70BB779540BF64869E65; // 0x04E0 (size: 0x1)
    class UTimelineComponent* FlightMovement;                                         // 0x04E8 (size: 0x8)
    float Timeline_1_NewTrack_0_2C5BA78B4EE8CBC7A829C4A4130994E1;                     // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_2C5BA78B4EE8CBC7A829C4A4130994E1; // 0x04F4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04F8 (size: 0x8)
    class AActor* SplineMoverActor;                                                   // 0x0500 (size: 0x8)
    bool Hit;                                                                         // 0x0508 (size: 0x1)
    float ZOffset;                                                                    // 0x050C (size: 0x4)
    FVector NewVar_0;                                                                 // 0x0510 (size: 0xC)
    class ACES1202_PlaneGnorcVehicle_C* SpawnedPlane;                                 // 0x0520 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x0528 (size: 0x8)
    class USplineComponent* LocalSpline;                                              // 0x0530 (size: 0x8)
    float StartDistance;                                                              // 0x0538 (size: 0x4)
    float splineTime;                                                                 // 0x053C (size: 0x4)
    float StartTime;                                                                  // 0x0540 (size: 0x4)
    bool ReverseDirection;                                                            // 0x0544 (size: 0x1)
    float SplineLength;                                                               // 0x0548 (size: 0x4)
    float Yaw_Saved;                                                                  // 0x054C (size: 0x4)
    float Roll;                                                                       // 0x0550 (size: 0x4)
    FRotator NewVar_1;                                                                // 0x0554 (size: 0xC)

    void UpdateLocationOnSpline();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void FlightMovement__FinishedFunc();
    void FlightMovement__UpdateFunc();
    void BndEvt__FalconLevelActorStateMachine_K2Node_ComponentBoundEvent_4_OnStateChangeSignature__DelegateSignature(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Alert_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void StartSplineMovement();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Active_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_105_Plane(int32 EntryPoint);
}; // Size: 0x560

#endif
