#ifndef UE4SS_SDK_BP_Whirlwind_HPP
#define UE4SS_SDK_BP_Whirlwind_HPP

class ABP_Whirlwind_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0320 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0328 (size: 0x8)
    class USceneComponent* SplineBase;                                                // 0x0330 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0338 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0340 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0350 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0358 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0360 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0368 (size: 0x8)
    float CameraRotation_CamRotation_F1AC817E4A4D3A5A1B579D88B10DA1C1;                // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraRotation__Direction_F1AC817E4A4D3A5A1B579D88B10DA1C1; // 0x0374 (size: 0x1)
    class UTimelineComponent* CameraRotation;                                         // 0x0378 (size: 0x8)
    float OneSecondTimeline_SplineCamera_09DE3F224913B4BF8EE1408C1D423E7B;            // 0x0380 (size: 0x4)
    float OneSecondTimeline_HorizValues_09DE3F224913B4BF8EE1408C1D423E7B;             // 0x0384 (size: 0x4)
    float OneSecondTimeline_Camera_09DE3F224913B4BF8EE1408C1D423E7B;                  // 0x0388 (size: 0x4)
    float OneSecondTimeline_Alpha_09DE3F224913B4BF8EE1408C1D423E7B;                   // 0x038C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> OneSecondTimeline__Direction_09DE3F224913B4BF8EE1408C1D423E7B; // 0x0390 (size: 0x1)
    class UTimelineComponent* OneSecondTimeline;                                      // 0x0398 (size: 0x8)
    class AActor* Player;                                                             // 0x03A0 (size: 0x8)
    class AController* PlayerController;                                              // 0x03A8 (size: 0x8)
    float SpringArmLength;                                                            // 0x03B0 (size: 0x4)
    FVector originalLocation;                                                         // 0x03B4 (size: 0xC)
    FVector TargetLocation;                                                           // 0x03C0 (size: 0xC)
    float TravelHeight;                                                               // 0x03CC (size: 0x4)
    float PlayRate;                                                                   // 0x03D0 (size: 0x4)
    float TriggerVolumeHeight;                                                        // 0x03D4 (size: 0x4)
    float TriggerVolumeWidth;                                                         // 0x03D8 (size: 0x4)
    float ExitRotation;                                                               // 0x03DC (size: 0x4)
    float PlayerEntryRotation;                                                        // 0x03E0 (size: 0x4)
    float Rotations;                                                                  // 0x03E4 (size: 0x4)
    FVector AltCamPos;                                                                // 0x03E8 (size: 0xC)
    FActiveGameplayEffectHandle Disable Gravity;                                      // 0x03F4 (size: 0x8)
    float Alt Camera Angle;                                                           // 0x03FC (size: 0x4)
    class AManagedCameraActor_C* Alt Camera;                                          // 0x0400 (size: 0x8)
    bool UseAltCamera;                                                                // 0x0408 (size: 0x1)
    float Alpha;                                                                      // 0x040C (size: 0x4)
    bool InUse;                                                                       // 0x0410 (size: 0x1)
    bool UseTriggerVals;                                                              // 0x0411 (size: 0x1)
    bool Inactive;                                                                    // 0x0412 (size: 0x1)
    float Clamp Value;                                                                // 0x0414 (size: 0x4)
    float Event Activation Delay;                                                     // 0x0418 (size: 0x4)
    float SpinValue;                                                                  // 0x041C (size: 0x4)
    bool ReverseSpinDirection;                                                        // 0x0420 (size: 0x1)
    float BlendInTime;                                                                // 0x0424 (size: 0x4)
    float BlendOutTime;                                                               // 0x0428 (size: 0x4)
    float ResetAtAlpha;                                                               // 0x042C (size: 0x4)
    bool UseSplineCam;                                                                // 0x0430 (size: 0x1)
    class AActor* SplineCamera;                                                       // 0x0438 (size: 0x8)
    FRotator SplineCamRot_Start;                                                      // 0x0440 (size: 0xC)
    FRotator SplineCamRot_End;                                                        // 0x044C (size: 0xC)
    float SplineLength;                                                               // 0x0458 (size: 0x4)
    bool DelayPlayerControl;                                                          // 0x045C (size: 0x1)
    float PlayerCamYaw;                                                               // 0x0460 (size: 0x4)
    float PlayerCamPitch;                                                             // 0x0464 (size: 0x4)
    FGameplayTagContainer InvalidTags;                                                // 0x0468 (size: 0x20)
    bool SaveOnActivate;                                                              // 0x0488 (size: 0x1)
    bool Saved;                                                                       // 0x0489 (size: 0x1)
    FPhasmidObjectSaveDataList save data;                                             // 0x0490 (size: 0x10)
    bool DontDisableAbilities;                                                        // 0x04A0 (size: 0x1)
    class AActor* MessageReceiver;                                                    // 0x04A8 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void OneSecondTimeline__FinishedFunc();
    void OneSecondTimeline__UpdateFunc();
    void CameraRotation__FinishedFunc();
    void CameraRotation__UpdateFunc();
    void ReceiveBeginPlay();
    void TransitionToCustomCamera();
    void ReturnFromCustomCamera();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void PlaySFX();
    void MissionEnd(bool Success, bool LevelEnd);
    void ActivateMechanic(class AActor* RequestingActor, int32 Value);
    void DeactivateMechanic(class AActor* RequestingActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void Whirlwind - Force Move Player Now(class AActor* Player Actor);
    void Transition to Spline Camera();
    void UpdateSplineCamValues(float Camera, float Float2);
    void EndSplineCame();
    void PlayerBPControl(bool UnderBPControl);
    void Begin();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Whirlwind(int32 EntryPoint);
}; // Size: 0x4B0

#endif
