#ifndef UE4SS_SDK_Fish_Base_HPP
#define UE4SS_SDK_Fish_Base_HPP

class AFish_Base_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UCapsuleComponent* SurprisedVolume;                                         // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State: Launch;                                        // 0x0458 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0460 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0468 (size: 0x8)
    class UBP_StateComponent_C* State: Bypass;                                        // 0x0470 (size: 0x8)
    class UBP_StateComponent_C* State: Selected;                                      // 0x0478 (size: 0x8)
    class UBP_StateComponent_C* State: Inactive;                                      // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State: In_Mouth;                                      // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State: Barf;                                          // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State:In_Queue;                                       // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State: Hit_Enabled;                                   // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State: Hit;                                           // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Fish;                                                 // 0x04B0 (size: 0x8)
    class USphereComponent* Sphere_Fish;                                              // 0x04B8 (size: 0x8)
    class USplineComponent* Idle Spline;                                              // 0x04C0 (size: 0x8)
    float Move_To_Bypass_NewTrack_0_463528E94F9FED246AB28098D23F6647;                 // 0x04C8 (size: 0x4)
    float Move_To_Bypass_Alpha_463528E94F9FED246AB28098D23F6647;                      // 0x04CC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Move_To_Bypass__Direction_463528E94F9FED246AB28098D23F6647; // 0x04D0 (size: 0x1)
    class UTimelineComponent* Move To Bypass;                                         // 0x04D8 (size: 0x8)
    float Timeline_2_NewTrack_1_76B6D48642536E19A722BB934185E94C;                     // 0x04E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_76B6D48642536E19A722BB934185E94C; // 0x04E4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x04E8 (size: 0x8)
    float MoveToReturnPathStart_NewTrack_2_BF9FE11C43ACA3CD8C3159804931777D;          // 0x04F0 (size: 0x4)
    float MoveToReturnPathStart_Alpha_BF9FE11C43ACA3CD8C3159804931777D;               // 0x04F4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveToReturnPathStart__Direction_BF9FE11C43ACA3CD8C3159804931777D; // 0x04F8 (size: 0x1)
    class UTimelineComponent* MoveToReturnPathStart;                                  // 0x0500 (size: 0x8)
    float Bypass_Launch_Distance_on_Spline_3A0C01814A68291B08A895B647D8D7BD;          // 0x0508 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Bypass_Launch__Direction_3A0C01814A68291B08A895B647D8D7BD; // 0x050C (size: 0x1)
    class UTimelineComponent* Bypass Launch;                                          // 0x0510 (size: 0x8)
    float Barf_Timeline_Distance_on_Spline_58F1101D4088F90C63F31ABD3A0D7589;          // 0x0518 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Barf_Timeline__Direction_58F1101D4088F90C63F31ABD3A0D7589; // 0x051C (size: 0x1)
    class UTimelineComponent* Barf Timeline;                                          // 0x0520 (size: 0x8)
    float ReQueueTo_Idle_NewTrack_1_CBBAAF554986E2A98370919CA099880F;                 // 0x0528 (size: 0x4)
    float ReQueueTo_Idle_Alpha_CBBAAF554986E2A98370919CA099880F;                      // 0x052C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReQueueTo_Idle__Direction_CBBAAF554986E2A98370919CA099880F; // 0x0530 (size: 0x1)
    class UTimelineComponent* ReQueueTo Idle;                                         // 0x0538 (size: 0x8)
    float Move_to_Launcher_NewTrack_1_8773CFF74525BCC75EEC7294D122A03A;               // 0x0540 (size: 0x4)
    float Move_to_Launcher_NewTrack_2_8773CFF74525BCC75EEC7294D122A03A;               // 0x0544 (size: 0x4)
    float Move_to_Launcher_Alpha_8773CFF74525BCC75EEC7294D122A03A;                    // 0x0548 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Move_to_Launcher__Direction_8773CFF74525BCC75EEC7294D122A03A; // 0x054C (size: 0x1)
    class UTimelineComponent* Move to Launcher;                                       // 0x0550 (size: 0x8)
    float Launcher_Distance_on_Spline_270F886840D5F1C5418C499EE8B0BE40;               // 0x0558 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Launcher__Direction_270F886840D5F1C5418C499EE8B0BE40; // 0x055C (size: 0x1)
    class UTimelineComponent* Launcher;                                               // 0x0560 (size: 0x8)
    class AActor* Fish_Launcher;                                                      // 0x0568 (size: 0x8)
    float Travel Distance;                                                            // 0x0570 (size: 0x4)
    float Play Rate;                                                                  // 0x0574 (size: 0x4)
    FVector Starting Location;                                                        // 0x0578 (size: 0xC)
    FVector Origin Location;                                                          // 0x0584 (size: 0xC)
    class AActor* Choosen Path;                                                       // 0x0590 (size: 0x8)
    FVector Tiki_Head Location;                                                       // 0x0598 (size: 0xC)
    FVector Starting_Location_Launch;                                                 // 0x05A4 (size: 0xC)
    class AActor* Barf_Spline;                                                        // 0x05B0 (size: 0x8)
    bool Inactive;                                                                    // 0x05B8 (size: 0x1)
    class AActor* My Parent Fish;                                                     // 0x05C0 (size: 0x8)
    TEnumAsByte<Fish_Colors::Type> Fish Colors;                                       // 0x05C8 (size: 0x1)
    class AActor* Bypass_Launcher;                                                    // 0x05D0 (size: 0x8)
    class USplineComponent* SplineRef;                                                // 0x05D8 (size: 0x8)
    FGameplayTagContainer NewVar_0;                                                   // 0x05E0 (size: 0x20)
    FRotator Starting_Rotation_Launch;                                                // 0x0600 (size: 0xC)
    class AActor* ReturnPathStart;                                                    // 0x0610 (size: 0x8)
    class USplineComponent* BarfSplineRef;                                            // 0x0618 (size: 0x8)
    float CurrentSplinePosition;                                                      // 0x0620 (size: 0x4)
    bool ReturnSplineActive;                                                          // 0x0624 (size: 0x1)
    bool IdleSplineActive;                                                            // 0x0625 (size: 0x1)
    class AActor* PathRef;                                                            // 0x0628 (size: 0x8)
    class USplineComponent* Path;                                                     // 0x0630 (size: 0x8)
    class USplineComponent* NewPathRef;                                               // 0x0638 (size: 0x8)
    float DeltaModifier;                                                              // 0x0640 (size: 0x4)
    float SplineLength;                                                               // 0x0644 (size: 0x4)
    class AActor* LauncherPathStart;                                                  // 0x0648 (size: 0x8)
    class AActor* WaterCheckVolume;                                                   // 0x0650 (size: 0x8)
    bool PlayerInWater;                                                               // 0x0658 (size: 0x1)
    class AActor* MissionMaster;                                                      // 0x0660 (size: 0x8)
    FVector SphereOrigin;                                                             // 0x0668 (size: 0xC)
    FRotator Ending_Rotation;                                                         // 0x0674 (size: 0xC)
    FRotator CurrentRotation;                                                         // 0x0680 (size: 0xC)
    bool SkinnyFish;                                                                  // 0x068C (size: 0x1)

    void UserConstructionScript();
    void Barf Timeline__FinishedFunc();
    void Barf Timeline__UpdateFunc();
    void ReQueueTo Idle__FinishedFunc();
    void ReQueueTo Idle__UpdateFunc();
    void Bypass Launch__FinishedFunc();
    void Bypass Launch__UpdateFunc();
    void Move To Bypass__FinishedFunc();
    void Move To Bypass__UpdateFunc();
    void Move to Launcher__FinishedFunc();
    void Move to Launcher__UpdateFunc();
    void MoveToReturnPathStart__FinishedFunc();
    void MoveToReturnPathStart__UpdateFunc();
    void Launcher__FinishedFunc();
    void Launcher__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void OnNotifyEnd_D4476EC24A0CFB595C155F894C68139A(FName NotifyName);
    void OnNotifyBegin_D4476EC24A0CFB595C155F894C68139A(FName NotifyName);
    void OnInterrupted_D4476EC24A0CFB595C155F894C68139A(FName NotifyName);
    void OnBlendOut_D4476EC24A0CFB595C155F894C68139A(FName NotifyName);
    void OnCompleted_D4476EC24A0CFB595C155F894C68139A(FName NotifyName);
    void OnNotifyEnd_6230E23D4C28A56DC2E37E81224622FA(FName NotifyName);
    void OnNotifyBegin_6230E23D4C28A56DC2E37E81224622FA(FName NotifyName);
    void OnInterrupted_6230E23D4C28A56DC2E37E81224622FA(FName NotifyName);
    void OnBlendOut_6230E23D4C28A56DC2E37E81224622FA(FName NotifyName);
    void OnCompleted_6230E23D4C28A56DC2E37E81224622FA(FName NotifyName);
    void BndEvt__State: Barf_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: In_Mouth_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Stop Auto Return();
    void BndEvt__State:In_Queue_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Launch_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Choose Return Path(bool Barf Return);
    void BndEvt__State: Bypass_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void Start Launcher();
    void Player Ready();
    void Choose Return Path NoLerp();
    void SetUpSpeedValues(int32 Index);
    void In Water(class AActor* OverlappedActor, class AActor* OtherActor);
    void Not In Water(class AActor* OverlappedActor, class AActor* OtherActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void Fish Launch Now();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Stop_ReQueue_TL();
    void Stop_Return_TL();
    void Stop_Idle_TL();
    void Stop_Launcher_TL();
    void Stop Spin TL();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Transition back to Idle();
    void Surprised(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Fish_Base(int32 EntryPoint);
}; // Size: 0x68D

#endif
