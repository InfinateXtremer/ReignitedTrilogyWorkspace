#ifndef UE4SS_SDK_DreamWeaverCannon_HPP
#define UE4SS_SDK_DreamWeaverCannon_HPP

class ADreamWeaverCannon_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0450 (size: 0x8)
    class UBoxComponent* SimpleCollision2;                                            // 0x0458 (size: 0x8)
    class UBoxComponent* SimpleCollision;                                             // 0x0460 (size: 0x8)
    class UCapsuleComponent* FuseTrigger;                                             // 0x0468 (size: 0x8)
    class USphereComponent* EnemyTrigger8;                                            // 0x0470 (size: 0x8)
    class USphereComponent* EnemyTrigger7;                                            // 0x0478 (size: 0x8)
    class UBoxComponent* EnemyTrigger6;                                               // 0x0480 (size: 0x8)
    class UBoxComponent* EnemyTrigger5;                                               // 0x0488 (size: 0x8)
    class UBoxComponent* EnemyTrigger4;                                               // 0x0490 (size: 0x8)
    class UBoxComponent* EnemyTrigger3;                                               // 0x0498 (size: 0x8)
    class UBoxComponent* EnemyTrigger2;                                               // 0x04A0 (size: 0x8)
    class UBoxComponent* EnemyTrigger1;                                               // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* CannonBase;                                           // 0x04B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04C0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04C8 (size: 0x8)
    class UChildActorComponent* PushPointCenter;                                      // 0x04D0 (size: 0x8)
    class UChildActorComponent* FusePoint;                                            // 0x04D8 (size: 0x8)
    class UBoxComponent* CameaTriggerR;                                               // 0x04E0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x04E8 (size: 0x8)
    class UChildActorComponent* LaunchPoint;                                          // 0x04F0 (size: 0x8)
    class UChildActorComponent* PushHeading;                                          // 0x04F8 (size: 0x8)
    class UBoxComponent* CameraTriggerL;                                              // 0x0500 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0508 (size: 0x8)
    float Timeline_0_0_NewTrack_0_A65D1DC84A31CD24EDFDEE8C42302688;                   // 0x0510 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_A65D1DC84A31CD24EDFDEE8C42302688; // 0x0514 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0518 (size: 0x8)
    float FireDelay;                                                                  // 0x0520 (size: 0x4)
    float DeltaTime;                                                                  // 0x0524 (size: 0x4)
    bool InRightVolume;                                                               // 0x0528 (size: 0x1)
    class AActor* Player;                                                             // 0x0530 (size: 0x8)
    class AController* PlayerController;                                              // 0x0538 (size: 0x8)
    float StartingRotationZ;                                                          // 0x0540 (size: 0x4)
    bool Cam Triggered;                                                               // 0x0544 (size: 0x1)
    bool InLeftVolume;                                                                // 0x0545 (size: 0x1)
    bool PlayerInRange;                                                               // 0x0546 (size: 0x1)
    bool EnemyControlled;                                                             // 0x0547 (size: 0x1)
    float RotationSpeed;                                                              // 0x0548 (size: 0x4)
    float AttackRange;                                                                // 0x054C (size: 0x4)
    class AActor* MyFuse;                                                             // 0x0550 (size: 0x8)
    class AActor* TargetedEnemy;                                                      // 0x0558 (size: 0x8)
    float InitialSpeed;                                                               // 0x0560 (size: 0x4)
    float EnemyHeading;                                                               // 0x0564 (size: 0x4)
    bool PlayerInFov;                                                                 // 0x0568 (size: 0x1)
    FRotator Rot_Desired;                                                             // 0x056C (size: 0xC)
    FRotator Rot_Current;                                                             // 0x0578 (size: 0xC)
    float Friendly Delay;                                                             // 0x0584 (size: 0x4)
    class AActor* Set Target;                                                         // 0x0588 (size: 0x8)
    class UChildActorComponent* FriendlyCannonLaunchPoint;                            // 0x0590 (size: 0x8)
    class ABP_CES1020_CannonGnorc_C* MyCannonGnorc;                                   // 0x0598 (size: 0x8)
    class USkinnedMeshComponent* NewVar_0;                                            // 0x05A0 (size: 0x8)
    class AActor* TriggerVolume1Enemy;                                                // 0x05A8 (size: 0x8)
    class AActor* TriggerVolume2Enemy;                                                // 0x05B0 (size: 0x8)
    class AActor* TriggerVolume3Enemy;                                                // 0x05B8 (size: 0x8)
    class AActor* TriggerVolume4Enemy;                                                // 0x05C0 (size: 0x8)
    class AActor* TriggerVolume5EnemyA;                                               // 0x05C8 (size: 0x8)
    class AActor* TriggerVolume5EnemyB;                                               // 0x05D0 (size: 0x8)
    class AActor* TriggerVolume5EnemyC;                                               // 0x05D8 (size: 0x8)
    class AActor* TriggerVolume6Enemy;                                                // 0x05E0 (size: 0x8)
    class AActor* TriggerVolume7Enemy;                                                // 0x05E8 (size: 0x8)
    class AActor* TriggerVolume8Enemy;                                                // 0x05F0 (size: 0x8)
    TArray<class AActor*> TargetArray;                                                // 0x05F8 (size: 0x10)
    FGameplayTagContainer FireTagContainer;                                           // 0x0608 (size: 0x20)
    class UParticleSystemComponent* AParticle;                                        // 0x0628 (size: 0x8)
    EProjectileType NewVar_1;                                                         // 0x0630 (size: 0x1)
    class AActor* CannonPilot;                                                        // 0x0638 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void OnNotifyEnd_1BDED6574460C25F54F57186CA011DEC(FName NotifyName);
    void OnNotifyBegin_1BDED6574460C25F54F57186CA011DEC(FName NotifyName);
    void OnInterrupted_1BDED6574460C25F54F57186CA011DEC(FName NotifyName);
    void OnBlendOut_1BDED6574460C25F54F57186CA011DEC(FName NotifyName);
    void OnCompleted_1BDED6574460C25F54F57186CA011DEC(FName NotifyName);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void FriendlyHit();
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
    void BndEvt__EnemyTrigger1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger3_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger4_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger5_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger3_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__EnemyTrigger6_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger5_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__EnemyTrigger7_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__EnemyTrigger8_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void FuseFire();
    void MissionAlert(class AActor* Actor, int32 Value);
    void PlayerReady();
    void Reset Push();
    void ExecuteUbergraph_DreamWeaverCannon(int32 EntryPoint);
}; // Size: 0x640

#endif
