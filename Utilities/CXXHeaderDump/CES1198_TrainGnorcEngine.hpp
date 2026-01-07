#ifndef UE4SS_SDK_CES1198_TrainGnorcEngine_HPP
#define UE4SS_SDK_CES1198_TrainGnorcEngine_HPP

class ACES1198_TrainGnorcEngine_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0488 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0490 (size: 0x8)
    class USceneComponent* ExplosionPoint;                                            // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_Active;                                         // 0x04A8 (size: 0x8)
    class UCapsuleComponent* Capsule1;                                                // 0x04B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04B8 (size: 0x8)
    class UBP_StateComponent_C* State_AlertBack;                                      // 0x04C0 (size: 0x8)
    class UBP_StateComponent_C* State_AlertRight;                                     // 0x04C8 (size: 0x8)
    class UBP_StateComponent_C* State_AlertLeft;                                      // 0x04D0 (size: 0x8)
    class UBP_StateComponent_C* State_Alert;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* Arm_R2;                                               // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* Arm_R;                                                // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* Arm_L2;                                               // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* Arm_L;                                                // 0x04F8 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0500 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0508 (size: 0x8)
    class UStaticMeshComponent* Wheel06;                                              // 0x0510 (size: 0x8)
    class UStaticMeshComponent* Wheel03;                                              // 0x0518 (size: 0x8)
    class UStaticMeshComponent* Wheel04;                                              // 0x0520 (size: 0x8)
    class UStaticMeshComponent* Wheel05;                                              // 0x0528 (size: 0x8)
    class UStaticMeshComponent* Wheel02;                                              // 0x0530 (size: 0x8)
    class UStaticMeshComponent* Wheel01;                                              // 0x0538 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0540 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent1;                     // 0x0548 (size: 0x8)
    class UStaticMeshComponent* TrainBody;                                            // 0x0550 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0558 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline__Direction_80A9BA0942716BF31CE622B78CD3F300; // 0x0560 (size: 0x1)
    class UTimelineComponent* SplineTimeLine;                                         // 0x0568 (size: 0x8)
    float Animation_Arm2Track_6A959B134A12857D6F040F84CB208F48;                       // 0x0570 (size: 0x4)
    float Animation_ArmTrack_6A959B134A12857D6F040F84CB208F48;                        // 0x0574 (size: 0x4)
    float Animation_NewTrack_0_6A959B134A12857D6F040F84CB208F48;                      // 0x0578 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Animation__Direction_6A959B134A12857D6F040F84CB208F48; // 0x057C (size: 0x1)
    class UTimelineComponent* Animation;                                              // 0x0580 (size: 0x8)
    class AActor* AttachSplineActor;                                                  // 0x0588 (size: 0x8)
    TArray<class AActor*> LocalCars;                                                  // 0x0590 (size: 0x10)
    class UAkAudioEvent* SFX Train Explode;                                           // 0x05A0 (size: 0x8)
    TArray<class A105_Barrel_C*> LocalBarrels;                                        // 0x05A8 (size: 0x10)
    class AActor* SplineRef;                                                          // 0x05B8 (size: 0x8)
    float splineTime;                                                                 // 0x05C0 (size: 0x4)
    class USplineComponent* LocalSpline;                                              // 0x05C8 (size: 0x8)
    float StartTime;                                                                  // 0x05D0 (size: 0x4)
    float StartDistance;                                                              // 0x05D4 (size: 0x4)
    TArray<class A105_Train_Car_C*> LocalTrainCars;                                   // 0x05D8 (size: 0x10)
    bool alerted;                                                                     // 0x05E8 (size: 0x1)
    bool ReverseDirection;                                                            // 0x05E9 (size: 0x1)

    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    void UserConstructionScript();
    void Animation__FinishedFunc();
    void Animation__UpdateFunc();
    void SplineTimeLine__FinishedFunc();
    void SplineTimeLine__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Alert_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void InitSplineMovement();
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Active_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Start();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CES1198_TrainGnorcEngine(int32 EntryPoint);
}; // Size: 0x5EA

#endif
