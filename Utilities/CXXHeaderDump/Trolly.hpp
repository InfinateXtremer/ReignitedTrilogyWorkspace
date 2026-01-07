#ifndef UE4SS_SDK_Trolly_HPP
#define UE4SS_SDK_Trolly_HPP

class ATrolly_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Muzzle_Flash;                              // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    class UStaticMeshComponent* lever;                                                // 0x0338 (size: 0x8)
    class UStaticMeshComponent* LR_Wheel;                                             // 0x0340 (size: 0x8)
    class UStaticMeshComponent* LF_Wheel;                                             // 0x0348 (size: 0x8)
    class UStaticMeshComponent* RR_Wheel;                                             // 0x0350 (size: 0x8)
    class UStaticMeshComponent* RF_Wheel;                                             // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Cart;                                                 // 0x0360 (size: 0x8)
    class USceneComponent* PlayerPos;                                                 // 0x0368 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Invisible Detector;                                   // 0x0378 (size: 0x8)
    class UBoxComponent* Left Detector;                                               // 0x0380 (size: 0x8)
    class UBoxComponent* Right Detector;                                              // 0x0388 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0390 (size: 0x8)
    class UBoxComponent* Box_Character;                                               // 0x0398 (size: 0x8)
    class UStaticMeshComponent* Art for Trolly;                                       // 0x03A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03A8 (size: 0x8)
    float CameraShakeTimeline_NewTrack_0_7875DDC2410ACC4CC2DD41ADEEBC6A5A;            // 0x03B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraShakeTimeline__Direction_7875DDC2410ACC4CC2DD41ADEEBC6A5A; // 0x03B4 (size: 0x1)
    class UTimelineComponent* CameraShakeTimeline;                                    // 0x03B8 (size: 0x8)
    float AlphaAdjust_NewTrack_0_8D86BE034FD107A8B483098E4F81B3AC;                    // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AlphaAdjust__Direction_8D86BE034FD107A8B483098E4F81B3AC; // 0x03C4 (size: 0x1)
    class UTimelineComponent* AlphaAdjust;                                            // 0x03C8 (size: 0x8)
    float Fall_Fall_D208B0EC4650B8FD86E117B58A8B46F8;                                 // 0x03D0 (size: 0x4)
    float Fall_Distance_D208B0EC4650B8FD86E117B58A8B46F8;                             // 0x03D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Fall__Direction_D208B0EC4650B8FD86E117B58A8B46F8; // 0x03D8 (size: 0x1)
    class UTimelineComponent* Fall;                                                   // 0x03E0 (size: 0x8)
    float Jump_Jump_85837C1247EB3B26FA50ACA563F6AA32;                                 // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Jump__Direction_85837C1247EB3B26FA50ACA563F6AA32; // 0x03EC (size: 0x1)
    class UTimelineComponent* Jump;                                                   // 0x03F0 (size: 0x8)
    float Track_Transition_Alpha_60C2B7204585050A025E9F98319FBB21;                    // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Track_Transition__Direction_60C2B7204585050A025E9F98319FBB21; // 0x03FC (size: 0x1)
    class UTimelineComponent* Track Transition;                                       // 0x0400 (size: 0x8)
    float Tolly_Tracks_Timeline_Distance_on_Spline_96BDAE514F1FBE024CD953BE26DDF82F;  // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Tolly_Tracks_Timeline__Direction_96BDAE514F1FBE024CD953BE26DDF82F; // 0x040C (size: 0x1)
    class UTimelineComponent* Tolly Tracks Timeline;                                  // 0x0410 (size: 0x8)
    TArray<class ATrolly_Spline_Base_C*> Trolly Tracks;                               // 0x0418 (size: 0x10)
    class ATrolly_Spline_Base_C* Next Trackh;                                         // 0x0428 (size: 0x8)
    class APlayerController* Player Controller;                                       // 0x0430 (size: 0x8)
    bool On Trolly;                                                                   // 0x0438 (size: 0x1)
    class ACharacter* Player CHaracter;                                               // 0x0440 (size: 0x8)
    class AActor* Starting Spline;                                                    // 0x0448 (size: 0x8)
    class AActor* Current Track;                                                      // 0x0450 (size: 0x8)
    FVector Transition Start Location;                                                // 0x0458 (size: 0xC)
    FVector Transition End Location;                                                  // 0x0464 (size: 0xC)
    float Travel Distance;                                                            // 0x0470 (size: 0x4)
    float Play Rate;                                                                  // 0x0474 (size: 0x4)
    class AActor* Next Track;                                                         // 0x0478 (size: 0x8)
    float Distance Along Target Spline;                                               // 0x0480 (size: 0x4)
    TArray<class AActor*> Target Points;                                              // 0x0488 (size: 0x10)
    float Distance Check;                                                             // 0x0498 (size: 0x4)
    class AActor* Nearest Target;                                                     // 0x04A0 (size: 0x8)
    class UBoxComponent* Detection Box Ref;                                           // 0x04A8 (size: 0x8)
    class AManagedCameraActor_C* Managed Camera;                                      // 0x04B0 (size: 0x8)
    FRotator Starting Transition Rotation;                                            // 0x04B8 (size: 0xC)
    FRotator Ending Transition Rotation;                                              // 0x04C4 (size: 0xC)
    class AActor* Restart_Point;                                                      // 0x04D0 (size: 0x8)
    FVector Trolly Start Location;                                                    // 0x04D8 (size: 0xC)
    bool Jump Active;                                                                 // 0x04E4 (size: 0x1)
    class AActor* Jump Refernce;                                                      // 0x04E8 (size: 0x8)
    FVector Trolly Art Relative Offset;                                               // 0x04F0 (size: 0xC)
    bool Reset Happening;                                                             // 0x04FC (size: 0x1)
    float Speed Multipier;                                                            // 0x0500 (size: 0x4)
    class AActor* MyMissionMaster;                                                    // 0x0508 (size: 0x8)
    bool AchievementCheck;                                                            // 0x0510 (size: 0x1)
    class UParticleSystemComponent* EmitterWheelLR;                                   // 0x0518 (size: 0x8)
    class UParticleSystemComponent* EmitterWheelRR;                                   // 0x0520 (size: 0x8)
    FVector PosBuffer;                                                                // 0x0528 (size: 0xC)
    FRotator RotBuffer;                                                               // 0x0534 (size: 0xC)
    bool MoveTrolly;                                                                  // 0x0540 (size: 0x1)
    float AlphaValue;                                                                 // 0x0544 (size: 0x4)
    float ExtraValue;                                                                 // 0x0548 (size: 0x4)
    int32 Lane;                                                                       // 0x054C (size: 0x4)
    class UDestructibleComponent* Destructible;                                       // 0x0550 (size: 0x8)

    void Find Distance Along Spline(FVector Location, class AActor* Actor with Spline, float& Distance along Spline);
    void UserConstructionScript();
    void Tolly Tracks Timeline__FinishedFunc();
    void Tolly Tracks Timeline__UpdateFunc();
    void Track Transition__FinishedFunc();
    void Track Transition__UpdateFunc();
    void Jump__FinishedFunc();
    void Jump__UpdateFunc();
    void Jump__NewTrack_0__EventFunc();
    void Fall__FinishedFunc();
    void Fall__UpdateFunc();
    void AlphaAdjust__FinishedFunc();
    void AlphaAdjust__UpdateFunc();
    void CameraShakeTimeline__FinishedFunc();
    void CameraShakeTimeline__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_0(FKey Key);
    void MinigameEnd();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void Trolly Camera On();
    void Trolly Camera Off();
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_8(float AxisValue);
    void STOP TROLLY MOVEMENT();
    void Transition End();
    void Transition Splines();
    void Track Change Open();
    void Track Change Locked();
    void Slide to Point();
    void BndEvt__Left Detector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Restart Player();
    void RESET GAME();
    void BndEvt__Art for Trolly_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cancel Possible Transition();
    void Cancel Possible Jump();
    void Jump Unlocked();
    void Jump Locked();
    void Lock out Fail Checks();
    void Activate Fail Checks();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MinigameStart();
    void ReceiveTick(float DeltaSeconds);
    void ReleaseThePlayer();
    void AchievementControl();
    void ExplodeCart();
    void WheelSparks();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void CameraShake();
    void JumpLand();
    void ExecuteUbergraph_Trolly(int32 EntryPoint);
}; // Size: 0x558

#endif
