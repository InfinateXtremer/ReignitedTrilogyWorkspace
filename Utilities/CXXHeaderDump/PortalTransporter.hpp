#ifndef UE4SS_SDK_PortalTransporter_HPP
#define UE4SS_SDK_PortalTransporter_HPP

class APortalTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0EC8 (size: 0x8)
    class UArrowComponent* CameraCompleteLocator;                                     // 0x0ED0 (size: 0x8)
    class USplineComponent* EggSpline;                                                // 0x0ED8 (size: 0x8)
    class UArrowComponent* TalismanLocator;                                           // 0x0EE0 (size: 0x8)
    class USplineComponent* OrbSpline;                                                // 0x0EE8 (size: 0x8)
    class UStaticMeshComponent* PortalPlaneCover;                                     // 0x0EF0 (size: 0x8)
    class UVisibilityComponentBP_C* VisibilityComponentBP;                            // 0x0EF8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0F00 (size: 0x8)
    class UArrowComponent* EntryLocator;                                              // 0x0F08 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0F10 (size: 0x8)
    class UArrowComponent* CompleteLocator;                                           // 0x0F18 (size: 0x8)
    class UArrowComponent* ReturnLocator;                                             // 0x0F20 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0F28 (size: 0x8)
    float Timeline_1_NewTrack_0_04244AE34208510D87BD99A86C045D81;                     // 0x0F30 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_04244AE34208510D87BD99A86C045D81; // 0x0F34 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0F38 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9B873372495AE56595FC1BB831B3F016; // 0x0F40 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0F48 (size: 0x8)
    float CapturePointLerp_NewTrack_0_FE846145427212A524D475AD39876249;               // 0x0F50 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CapturePointLerp__Direction_FE846145427212A524D475AD39876249; // 0x0F54 (size: 0x1)
    class UTimelineComponent* CapturePointLerp;                                       // 0x0F58 (size: 0x8)
    float Portal_Background_Fader_Opacity_80E42AAE4F87726A128ABCB34852E39D;           // 0x0F60 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Portal_Background_Fader__Direction_80E42AAE4F87726A128ABCB34852E39D; // 0x0F64 (size: 0x1)
    class UTimelineComponent* Portal Background Fader;                                // 0x0F68 (size: 0x8)
    float Move_Player_Into_Portal_Log_D88EE1C743ECAEFD2DB556A4E7679699;               // 0x0F70 (size: 0x4)
    float Move_Player_Into_Portal_Pos_and_Rot_D88EE1C743ECAEFD2DB556A4E7679699;       // 0x0F74 (size: 0x4)
    float Move_Player_Into_Portal_Linear_D88EE1C743ECAEFD2DB556A4E7679699;            // 0x0F78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Move_Player_Into_Portal__Direction_D88EE1C743ECAEFD2DB556A4E7679699; // 0x0F7C (size: 0x1)
    class UTimelineComponent* Move Player Into Portal;                                // 0x0F80 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> ExitFromPortal__Direction_9182E3B34481F49342480F9C35236ACA; // 0x0F88 (size: 0x1)
    class UTimelineComponent* ExitFromPortal;                                         // 0x0F90 (size: 0x8)
    float ReturnToPortalTarget_NewTrack_1_6CFE3D114204B9994696AE843DCF735C;           // 0x0F98 (size: 0x4)
    float ReturnToPortalTarget_NewTrack_0_6CFE3D114204B9994696AE843DCF735C;           // 0x0F9C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReturnToPortalTarget__Direction_6CFE3D114204B9994696AE843DCF735C; // 0x0FA0 (size: 0x1)
    class UTimelineComponent* ReturnToPortalTarget;                                   // 0x0FA8 (size: 0x8)
    bool UnloadLevels;                                                                // 0x0FB0 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0FB8 (size: 0x8)
    class UMaterialInstanceDynamic* Mid;                                              // 0x0FC0 (size: 0x8)
    FTransform InitialReturnTransform;                                                // 0x0FD0 (size: 0x30)
    class ASimpleCamera_C* CameraActor;                                               // 0x1000 (size: 0x8)
    bool CameraCrossedPortal;                                                         // 0x1008 (size: 0x1)
    FTransform ReturnLocatorInCurrentSpace;                                           // 0x1010 (size: 0x30)
    bool UnloadLightingOnEndPlay;                                                     // 0x1040 (size: 0x1)
    class ASimpleCamera_C* Portal Entry Camera;                                       // 0x1048 (size: 0x8)
    FTransform PlayerStartTransform;                                                  // 0x1050 (size: 0x30)
    FTransform CameraStartTransform;                                                  // 0x1080 (size: 0x30)
    class UParticleSystem* Particle Idle;                                             // 0x10B0 (size: 0x8)
    class UParticleSystem* Particle Open;                                             // 0x10B8 (size: 0x8)
    class UParticleSystemComponent* Particle Idle Ref;                                // 0x10C0 (size: 0x8)
    class UParticleSystemComponent* Particle Open Ref;                                // 0x10C8 (size: 0x8)
    class UMaterialInstance* Material Particle Idle;                                  // 0x10D0 (size: 0x8)
    FLinearColor Particle Tint Idle;                                                  // 0x10D8 (size: 0x10)
    int32 MI Particle Index;                                                          // 0x10E8 (size: 0x4)
    FRotator Particle Rotation Offset ;                                               // 0x10EC (size: 0xC)
    class UMaterialInstance* Idle Screen Material;                                    // 0x10F8 (size: 0x8)
    bool TargetPortalThereYet;                                                        // 0x1100 (size: 0x1)
    int32 Loop Index;                                                                 // 0x1104 (size: 0x4)
    FLinearColor Particle Tint Target Portal;                                         // 0x1108 (size: 0x10)
    FVector Particle transform offset;                                                // 0x1118 (size: 0xC)
    FVector Particle Scale;                                                           // 0x1124 (size: 0xC)
    FVector PlayerVelocity;                                                           // 0x1130 (size: 0xC)
    bool Facing Portal;                                                               // 0x113C (size: 0x1)
    FVector Camera Offset;                                                            // 0x1140 (size: 0xC)
    float Time To Switch;                                                             // 0x114C (size: 0x4)
    bool ReturnFromSublevelInProgress;                                                // 0x1150 (size: 0x1)
    bool AttachCam;                                                                   // 0x1151 (size: 0x1)
    FTransform CamTransformSave;                                                      // 0x1160 (size: 0x30)
    FActiveGameplayEffectHandle AGE Handle;                                           // 0x1190 (size: 0x8)
    class ABasePortal_C* Source Portal;                                               // 0x1198 (size: 0x8)
    float Preload Radius;                                                             // 0x11A0 (size: 0x4)
    float Unload Radius;                                                              // 0x11A4 (size: 0x4)
    bool ReturnHomeOnly;                                                              // 0x11A8 (size: 0x1)
    float Final FOV;                                                                  // 0x11AC (size: 0x4)
    FVector Final Scale;                                                              // 0x11B0 (size: 0xC)
    float SwitchTime;                                                                 // 0x11BC (size: 0x4)
    bool ReturnFromS2InProgress;                                                      // 0x11C0 (size: 0x1)
    class UTexture* PortalOpacityMask;                                                // 0x11C8 (size: 0x8)
    FVector Portal Plane Scale;                                                       // 0x11D0 (size: 0xC)
    class UParticleSystem* Particle Target Open;                                      // 0x11E0 (size: 0x8)
    float RenderQuality;                                                              // 0x11E8 (size: 0x4)
    FRotator InitialPortalRotation;                                                   // 0x11EC (size: 0xC)
    bool LoadCompleted;                                                               // 0x11F8 (size: 0x1)
    int32 gameIndex;                                                                  // 0x11FC (size: 0x4)
    class ASimpleCamera_C* S2CameraActor;                                             // 0x1200 (size: 0x8)
    class UTextureCube* Portal Texture Cube;                                          // 0x1208 (size: 0x8)
    bool DataLoaded;                                                                  // 0x1210 (size: 0x1)
    FVector Camera Lerp Start;                                                        // 0x1214 (size: 0xC)
    float ReturnFOV;                                                                  // 0x1220 (size: 0x4)
    bool ReturnRotationFinished;                                                      // 0x1224 (size: 0x1)
    float TurnRate;                                                                   // 0x1228 (size: 0x4)
    bool Sloped?;                                                                     // 0x122C (size: 0x1)

    void IsSpyroSwimming(bool& IsSwimming);
    void SetUp S2 Camera();
    void CreatePortalCoverMat();
    void Preload Area Left();
    void Prealod Area Entered();
    bool RemoveDownloadMessage();
    bool CheckForPatch();
    void Set Child Actor Visibility(bool visible);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void CheckForPreload();
    void CurveLocationFunction(float Alpha, float Alpha 2, FVector& Location, FRotator& Rotation);
    void UpdatePortalOrientation();
    void TriggerPreloadVFX();
    void UserConstructionScript();
    void ReturnToPortalTarget__FinishedFunc();
    void ReturnToPortalTarget__UpdateFunc();
    void ExitFromPortal__FinishedFunc();
    void ExitFromPortal__UpdateFunc();
    void Move Player Into Portal__FinishedFunc();
    void Move Player Into Portal__UpdateFunc();
    void Portal Background Fader__FinishedFunc();
    void Portal Background Fader__UpdateFunc();
    void CapturePointLerp__FinishedFunc();
    void CapturePointLerp__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionTriggerDetectedTarget();
    void ITransitionCompleteSource();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetupIncomingTransitionCamera();
    void UpdateIncomingTransitionCamera();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void StartTriggerTimelines();
    void TriggerPreload();
    void UnTriggerPreload();
    void CloseUnloadGate();
    void OnPartnerPortalFound(class APortal* FoundParter);
    void Event Queue Load();
    void OpenGate();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteSource();
    void HandlePlayerSpawn(float delayDuration);
    void EventUntrigger();
    void TI_TriggerPreload();
    void setPortalEnabled(bool Enabled);
    void ReceivePortalStart();
    void Fade To White();
    void Fade In From White();
    void LoadDataRestored();
    void Return Control();
    void SFX Start Portal Sounds();
    void ExecuteUbergraph_PortalTransporter(int32 EntryPoint);
}; // Size: 0x122D

#endif
