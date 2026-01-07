#ifndef UE4SS_SDK_Cannon_HPP
#define UE4SS_SDK_Cannon_HPP

class ACannon_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UStaticMeshComponent* Wheel_L;                                              // 0x0450 (size: 0x8)
    class UStaticMeshComponent* wheel_r;                                              // 0x0458 (size: 0x8)
    class UStaticMeshComponent* FakeWheel_L;                                          // 0x0460 (size: 0x8)
    class UStaticMeshComponent* FakeWheel_R;                                          // 0x0468 (size: 0x8)
    class UCapsuleComponent* Capsule3;                                                // 0x0470 (size: 0x8)
    class UBoxComponent* CameraTriggerL;                                              // 0x0478 (size: 0x8)
    class UChildActorComponent* FusePoint;                                            // 0x0480 (size: 0x8)
    class UCapsuleComponent* FuseTrigger;                                             // 0x0488 (size: 0x8)
    class UBoxComponent* CameaTriggerR;                                               // 0x0490 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0498 (size: 0x8)
    class UChildActorComponent* LaunchPoint;                                          // 0x04A0 (size: 0x8)
    class UChildActorComponent* PushHeading;                                          // 0x04A8 (size: 0x8)
    class UChildActorComponent* PushPointCenter;                                      // 0x04B0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* CannonBase;                                           // 0x04C0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04C8 (size: 0x8)
    float Timeline_3_NewTrack_0_B7C8837C4D63064F8ECDB88F801F85E4;                     // 0x04D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_B7C8837C4D63064F8ECDB88F801F85E4; // 0x04D4 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x04D8 (size: 0x8)
    float Timeline_2_NewTrack_0_E883984E425035A2E685D689E7DF0B18;                     // 0x04E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_E883984E425035A2E685D689E7DF0B18; // 0x04E4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x04E8 (size: 0x8)
    float Timeline_0_0_NewTrack_0_D73A6A7F444A3E47CC6E07B8EA956C37;                   // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_D73A6A7F444A3E47CC6E07B8EA956C37; // 0x04F4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04F8 (size: 0x8)
    float Timeline_1_NewTrack_0_CF9F9D1443D426F02E0D338EC3F2D39C;                     // 0x0500 (size: 0x4)
    float Timeline_1_Position_CF9F9D1443D426F02E0D338EC3F2D39C;                       // 0x0504 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_CF9F9D1443D426F02E0D338EC3F2D39C; // 0x0508 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0510 (size: 0x8)
    float FireDelay;                                                                  // 0x0518 (size: 0x4)
    float DeltaTime;                                                                  // 0x051C (size: 0x4)
    bool InRightVolume;                                                               // 0x0520 (size: 0x1)
    class AActor* Player;                                                             // 0x0528 (size: 0x8)
    class AController* PlayerController;                                              // 0x0530 (size: 0x8)
    float StartingRotationZ;                                                          // 0x0538 (size: 0x4)
    bool Cam Triggered;                                                               // 0x053C (size: 0x1)
    bool InLeftVolume;                                                                // 0x053D (size: 0x1)
    bool PlayerInRange;                                                               // 0x053E (size: 0x1)
    bool EnemyControlled;                                                             // 0x053F (size: 0x1)
    float RotationSpeed;                                                              // 0x0540 (size: 0x4)
    float AttackRange;                                                                // 0x0544 (size: 0x4)
    class AActor* TargetedEnemy;                                                      // 0x0548 (size: 0x8)
    float InitialSpeed;                                                               // 0x0550 (size: 0x4)
    float EnemyHeading;                                                               // 0x0554 (size: 0x4)
    bool PlayerInFov;                                                                 // 0x0558 (size: 0x1)
    FRotator Rot_Desired;                                                             // 0x055C (size: 0xC)
    FRotator Rot_Current;                                                             // 0x0568 (size: 0xC)
    class AActor* MyFriendlyCannon;                                                   // 0x0578 (size: 0x8)
    float Friendly Delay;                                                             // 0x0580 (size: 0x4)
    class AActor* Set Target;                                                         // 0x0588 (size: 0x8)
    bool IsInstigator;                                                                // 0x0590 (size: 0x1)
    class UChildActorComponent* FriendlyCannonLaunchPoint;                            // 0x0598 (size: 0x8)
    class ABP_CES1020_CannonGnorc_C* MyCannonGnorc;                                   // 0x05A0 (size: 0x8)
    FGameplayTagContainer FireTagContainer;                                           // 0x05A8 (size: 0x20)
    class UParticleSystemComponent* AParticle;                                        // 0x05C8 (size: 0x8)
    float CurrentWheelPos;                                                            // 0x05D0 (size: 0x4)
    float DesiredWheelPos;                                                            // 0x05D4 (size: 0x4)
    float CurrentWheelRot;                                                            // 0x05D8 (size: 0x4)
    float DesiredWheelRot;                                                            // 0x05DC (size: 0x4)
    float FireWheel_R;                                                                // 0x05E0 (size: 0x4)
    float FireWheel_L;                                                                // 0x05E4 (size: 0x4)
    TArray<class AActor*> My Object Array;                                            // 0x05E8 (size: 0x10)
    bool SpyroControlled;                                                             // 0x05F8 (size: 0x1)
    int32 CamSettingsIndex;                                                           // 0x05FC (size: 0x4)
    FRotator CamRotationStart;                                                        // 0x0600 (size: 0xC)
    FRotator CamRotationEnd;                                                          // 0x060C (size: 0xC)
    float Playing Anim Percent;                                                       // 0x0618 (size: 0x4)
    float YawTurnDegreesPerSecond;                                                    // 0x061C (size: 0x4)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void OnNotifyEnd_AE88D0E0445AA136A1E1B3AD1AC0B442(FName NotifyName);
    void OnNotifyBegin_AE88D0E0445AA136A1E1B3AD1AC0B442(FName NotifyName);
    void OnInterrupted_AE88D0E0445AA136A1E1B3AD1AC0B442(FName NotifyName);
    void OnBlendOut_AE88D0E0445AA136A1E1B3AD1AC0B442(FName NotifyName);
    void OnCompleted_AE88D0E0445AA136A1E1B3AD1AC0B442(FName NotifyName);
    void FuseInterface();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_8(float AxisValue);
    void Trigger Cam();
    void UntriggerCam();
    void BndEvt__CameraTriggerL_K2Node_ComponentBoundEvent_522_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CameraTriggerL_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateRotation();
    void UpdateRange();
    void FireEnemyShot();
    void Rotate Wheels();
    void Fire At Friendly Cannon();
    void FriendlyHit();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void FuseFire();
    void AnimateWheels();
    void Reset Push Anim();
    void ExecuteUbergraph_Cannon(int32 EntryPoint);
}; // Size: 0x620

#endif
