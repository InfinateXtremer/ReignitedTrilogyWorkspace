#ifndef UE4SS_SDK_PortalTransporterTarget_HPP
#define UE4SS_SDK_PortalTransporterTarget_HPP

class APortalTransporterTarget_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UArrowComponent* Final Camera Transform;                                    // 0x0EC8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0ED0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0ED8 (size: 0x8)
    class USplineComponent* PostTransitionSpline;                                     // 0x0EE0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0EE8 (size: 0x8)
    float Timeline_0_NewTrack_0_C5DC27AA47232CA7F3171C8CC70574F4;                     // 0x0EF0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C5DC27AA47232CA7F3171C8CC70574F4; // 0x0EF4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0EF8 (size: 0x8)
    float Timeline_2_NewTrack_1_DD69A14E420E0290AFB0F18A94F6EEFF;                     // 0x0F00 (size: 0x4)
    float Timeline_2_NewTrack_0_DD69A14E420E0290AFB0F18A94F6EEFF;                     // 0x0F04 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_DD69A14E420E0290AFB0F18A94F6EEFF; // 0x0F08 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0F10 (size: 0x8)
    float Timeline_1_Twice_8514EF1C43E329CDC2D57D85DF0C8723;                          // 0x0F18 (size: 0x4)
    float Timeline_1_Beta_8514EF1C43E329CDC2D57D85DF0C8723;                           // 0x0F1C (size: 0x4)
    float Timeline_1_Alpha_8514EF1C43E329CDC2D57D85DF0C8723;                          // 0x0F20 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8514EF1C43E329CDC2D57D85DF0C8723; // 0x0F24 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0F28 (size: 0x8)
    float TransitionTimeline_Rotation_F406912848F2A9BD02622388CAE912A2;               // 0x0F30 (size: 0x4)
    float TransitionTimeline_NewTrack_2_F406912848F2A9BD02622388CAE912A2;             // 0x0F34 (size: 0x4)
    float TransitionTimeline_NewTrack_1_F406912848F2A9BD02622388CAE912A2;             // 0x0F38 (size: 0x4)
    float TransitionTimeline_NewTrack_0_F406912848F2A9BD02622388CAE912A2;             // 0x0F3C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TransitionTimeline__Direction_F406912848F2A9BD02622388CAE912A2; // 0x0F40 (size: 0x1)
    class UTimelineComponent* TransitionTimeline;                                     // 0x0F48 (size: 0x8)
    class APlayerStart* LevelStart;                                                   // 0x0F50 (size: 0x8)
    class AGlobalTransporter_C* GlobalTransporter;                                    // 0x0F58 (size: 0x8)
    bool TransitionInProgress;                                                        // 0x0F60 (size: 0x1)
    class APortalTransitionCamera_C* PortalCamera;                                    // 0x0F68 (size: 0x8)
    bool LevelLoaded;                                                                 // 0x0F70 (size: 0x1)
    bool CustomCamStarted;                                                            // 0x0F71 (size: 0x1)
    class AActor* sourcePortal;                                                       // 0x0F78 (size: 0x8)
    class ASimpleCamera_C* PT_EntryCam;                                               // 0x0F80 (size: 0x8)
    bool Hold;                                                                        // 0x0F88 (size: 0x1)
    FRotator Rotator;                                                                 // 0x0F8C (size: 0xC)
    bool SetLevelVisible;                                                             // 0x0F98 (size: 0x1)
    int32 LoopIndex;                                                                  // 0x0F9C (size: 0x4)
    FLinearColor Tint Color;                                                          // 0x0FA0 (size: 0x10)
    float origFOV;                                                                    // 0x0FB0 (size: 0x4)
    bool start rotation;                                                              // 0x0FB4 (size: 0x1)
    FRotator Orig Rot;                                                                // 0x0FB8 (size: 0xC)
    FRotator CurrentRot;                                                              // 0x0FC4 (size: 0xC)
    FVector Scale Save;                                                               // 0x0FD0 (size: 0xC)
    bool CamInFront;                                                                  // 0x0FDC (size: 0x1)
    FActiveGameplayEffectHandle Disable Gravity Effect;                               // 0x0FE0 (size: 0x8)
    float OrigDist;                                                                   // 0x0FE8 (size: 0x4)
    bool Transition complete;                                                         // 0x0FEC (size: 0x1)
    class UParticleSystem* Target Open Particle ;                                     // 0x0FF0 (size: 0x8)
    FVector Particle Scale;                                                           // 0x0FF8 (size: 0xC)
    class UActorComponent* NewVar_0_0;                                                // 0x1008 (size: 0x8)
    class UParticleSystemComponent* Target Door Open ;                                // 0x1010 (size: 0x8)
    bool PlayerSpawned;                                                               // 0x1018 (size: 0x1)
    bool DataRestored;                                                                // 0x1019 (size: 0x1)
    float LoadInTime;                                                                 // 0x101C (size: 0x4)
    float Final Angle;                                                                // 0x1020 (size: 0x4)
    float Final Distance;                                                             // 0x1024 (size: 0x4)
    float Final Z;                                                                    // 0x1028 (size: 0x4)
    float Height Offset;                                                              // 0x102C (size: 0x4)
    class UAnimMontage* Fly-In Montage;                                               // 0x1030 (size: 0x8)
    float AnimTime;                                                                   // 0x1038 (size: 0x4)
    bool Lock Camera To Spyro?;                                                       // 0x103C (size: 0x1)
    class ASimpleCamera_C* LoopCam;                                                   // 0x1040 (size: 0x8)
    float AddToWorldTime;                                                             // 0x1048 (size: 0x4)
    FVector Cam Location Save;                                                        // 0x104C (size: 0xC)
    bool Use Final Camera Locator;                                                    // 0x1058 (size: 0x1)
    float Camera Movement Delay Timer;                                                // 0x105C (size: 0x4)
    float Camera Locator Transition Time;                                             // 0x1060 (size: 0x4)
    float FinalFOV;                                                                   // 0x1064 (size: 0x4)
    float Transition FOV;                                                             // 0x1068 (size: 0x4)
    float Waiting For Load Time;                                                      // 0x106C (size: 0x4)
    bool Time Limit Reached;                                                          // 0x1070 (size: 0x1)
    float RotationOffset;                                                             // 0x1074 (size: 0x4)

    void FindGroundOffset();
    FTransform GetSpawnTransform();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void Set Location to spline(class UTimelineComponent* Timeline, class USplineComponent* Spline, class AActor* Char, FRotator Alt Rotation);
    void NewLocationHelper(float& StartDist, float& EndDist, float& StartAngle, float& EndAngle, float& StartZ, float& EndZ, bool& crossed);
    void GetNewLocation(float Z, float angle, float dist, float Final Z, float FinalAngle, float EndDist, bool crossed, float Alpha, FTransform& New Transform);
    void GetPlayerStartingTransform(FTransform& InitialTransform);
    void DidWeStartFromCurrentCamLoc?(bool& yes);
    void GetInitialTransform(FTransform& InitialTransform);
    void UserConstructionScript();
    void TransitionTimeline__FinishedFunc();
    void TransitionTimeline__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionTriggerDetectedTarget();
    void ITransitionCompleteSource();
    void ReceiveBeginPlay();
    void StartCustomCam();
    void EndCustomCam();
    void ReceiveTick(float DeltaSeconds);
    void PutPlayerAtSplineEnd();
    void Start Target Particle(FLinearColor Tint Color, class UParticleSystem* Target Open Particle, FVector Particle Scale);
    void Stop Target Particle ();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void Return Player Control();
    void HandlePlayerSpawn(float delayDuration);
    void LoadDataRestored();
    void ready();
    void Fade In From White();
    void Begin Flyin Anim();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_PortalTransporterTarget(int32 EntryPoint);
}; // Size: 0x1078

#endif
