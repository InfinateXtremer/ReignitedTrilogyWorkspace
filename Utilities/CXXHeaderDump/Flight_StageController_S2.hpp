#ifndef UE4SS_SDK_Flight_StageController_S2_HPP
#define UE4SS_SDK_Flight_StageController_S2_HPP

class AFlight_StageController_S2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* UI_CameraBackground;                                      // 0x0320 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0328 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0330 (size: 0x8)
    class USphereComponent* PlayableArea;                                             // 0x0338 (size: 0x8)
    class UFlightLevelDataComponent* FlightLevelData;                                 // 0x0340 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x0348 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0358 (size: 0x8)
    float SuccessTimelin_FloatValue_F9022ADC45CD0846788967A2D75AA418;                 // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SuccessTimelin__Direction_F9022ADC45CD0846788967A2D75AA418; // 0x0364 (size: 0x1)
    class UTimelineComponent* SuccessTimelin;                                         // 0x0368 (size: 0x8)
    float SwimZ_Timeline_WaterLength_316DAE8546A9AB949FAB468E013BA76D;                // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SwimZ_Timeline__Direction_316DAE8546A9AB949FAB468E013BA76D; // 0x0374 (size: 0x1)
    class UTimelineComponent* SwimZ_Timeline;                                         // 0x0378 (size: 0x8)
    class AActor* Stage1_Actor;                                                       // 0x0380 (size: 0x8)
    class AActor* Stage2_Actor;                                                       // 0x0388 (size: 0x8)
    class AGlobalTransporter_C* GlobalTransportActor;                                 // 0x0390 (size: 0x8)
    class AActor* FlightTransportActor;                                               // 0x0398 (size: 0x8)
    int32 stage;                                                                      // 0x03A0 (size: 0x4)
    FVector PlayerPos;                                                                // 0x03A4 (size: 0xC)
    bool HoldPlayer;                                                                  // 0x03B0 (size: 0x1)
    FText TitleText;                                                                  // 0x03B8 (size: 0x18)
    FTransform PlayerStartPos;                                                        // 0x03D0 (size: 0x30)
    bool HUDActive;                                                                   // 0x0400 (size: 0x1)
    class AFalconGameState_C* GameStateActor;                                         // 0x0408 (size: 0x8)
    class AActor* PlayerStartLocation;                                                // 0x0410 (size: 0x8)
    bool Init;                                                                        // 0x0418 (size: 0x1)
    float MaxAltitude;                                                                // 0x041C (size: 0x4)
    float MaxAltitudeSpeed;                                                           // 0x0420 (size: 0x4)
    float MinAltitude;                                                                // 0x0424 (size: 0x4)
    float MinAltitudeSpeed;                                                           // 0x0428 (size: 0x4)
    class AActor* CurrentActor;                                                       // 0x0430 (size: 0x8)
    bool MenuExit;                                                                    // 0x0438 (size: 0x1)
    float BoxZPos;                                                                    // 0x043C (size: 0x4)
    bool OutsideArea;                                                                 // 0x0440 (size: 0x1)
    bool Inactive;                                                                    // 0x0441 (size: 0x1)
    class AActor* OverrideActor;                                                      // 0x0448 (size: 0x8)
    bool DontUseCrashCheck;                                                           // 0x0450 (size: 0x1)
    class UParticleSystem* CrashParticle_Small;                                       // 0x0458 (size: 0x8)
    class UParticleSystem* CrashParticle_Big;                                         // 0x0460 (size: 0x8)
    bool CanSuperCharge(Spyro2);                                                      // 0x0468 (size: 0x1)
    float SwimZ;                                                                      // 0x046C (size: 0x4)
    float SwimZ_Local;                                                                // 0x0470 (size: 0x4)
    bool IsFlying;                                                                    // 0x0474 (size: 0x1)
    bool Crashed;                                                                     // 0x0475 (size: 0x1)
    FVector Vector;                                                                   // 0x0478 (size: 0xC)
    class USplineComponent* SplineRef;                                                // 0x0488 (size: 0x8)
    bool Success;                                                                     // 0x0490 (size: 0x1)
    int32 VisionBuffer;                                                               // 0x0494 (size: 0x4)
    bool VisionCheck;                                                                 // 0x0498 (size: 0x1)
    class UParticleSystem* LocalParticle;                                             // 0x04A0 (size: 0x8)
    class AIGC_SimpleCamera_C* SpawnedCam;                                            // 0x04A8 (size: 0x8)
    bool PostGameCamActive;                                                           // 0x04B0 (size: 0x1)
    FTransform MenuCamTransform;                                                      // 0x04C0 (size: 0x30)
    bool UserRequestsQuit;                                                            // 0x04F0 (size: 0x1)
    int32 CrashCam;                                                                   // 0x04F4 (size: 0x4)
    bool MusicPaused;                                                                 // 0x04F8 (size: 0x1)
    class UAnimMontage* CrashAnim;                                                    // 0x0500 (size: 0x8)
    class UAkAudioEvent* CrashSoundFX;                                                // 0x0508 (size: 0x8)
    class AMusicManager_C* MusicManager;                                              // 0x0510 (size: 0x8)
    bool Crash_UseLava;                                                               // 0x0518 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void SwimZ_Timeline__FinishedFunc();
    void SwimZ_Timeline__UpdateFunc();
    void SwimZ_Timeline__Event__EventFunc();
    void SuccessTimelin__FinishedFunc();
    void SuccessTimelin__UpdateFunc();
    void SuccessTimelin__NewTrack_0__EventFunc();
    void OnNotifyEnd_59C46F2A4597B8BB12FA83AD3E4A1713(FName NotifyName);
    void OnNotifyBegin_59C46F2A4597B8BB12FA83AD3E4A1713(FName NotifyName);
    void OnInterrupted_59C46F2A4597B8BB12FA83AD3E4A1713(FName NotifyName);
    void OnBlendOut_59C46F2A4597B8BB12FA83AD3E4A1713(FName NotifyName);
    void OnCompleted_59C46F2A4597B8BB12FA83AD3E4A1713(FName NotifyName);
    void OnNotifyEnd_FE34E7154E3840BB4380C9B5806706BC(FName NotifyName);
    void OnNotifyBegin_FE34E7154E3840BB4380C9B5806706BC(FName NotifyName);
    void OnInterrupted_FE34E7154E3840BB4380C9B5806706BC(FName NotifyName);
    void OnBlendOut_FE34E7154E3840BB4380C9B5806706BC(FName NotifyName);
    void OnCompleted_FE34E7154E3840BB4380C9B5806706BC(FName NotifyName);
    void OnNotifyEnd_7632CB0547F51CC4C680DC8D740A5DF0(FName NotifyName);
    void OnNotifyBegin_7632CB0547F51CC4C680DC8D740A5DF0(FName NotifyName);
    void OnInterrupted_7632CB0547F51CC4C680DC8D740A5DF0(FName NotifyName);
    void OnBlendOut_7632CB0547F51CC4C680DC8D740A5DF0(FName NotifyName);
    void OnCompleted_7632CB0547F51CC4C680DC8D740A5DF0(FName NotifyName);
    void achievement status callback(FName achievement id, bool found, float Progress);
    void achievement details callback(FAchievementStruct achievement def, bool found, float Progress);
    void SavePortalRotation(FRotator CurrentRotation);
    void TI_LevelEndItemCollected();
    void TI_LoadNextHomeworld();
    void TI_ReturnHomeMenu();
    void TI_TransitionBeginSource();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteSource();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionTriggerDetectedSource();
    void TI_TransitionTriggerDetectedTarget();
    void TI_TriggerPreload();
    void TI_TurnOnOrbs();
    void HudDialogOptionSelected(int32 selectedIndex);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionEnd(bool Success, bool LevelEnd);
    void HUD TryAgain();
    void LeaveYourLevel();
    void StartMission();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void HackAddLife();
    void FlightSummaryReply(int32 selected);
    void ResetGates();
    void PlayerReady();
    void BndEvt__PlayableArea_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionSuspend(bool Suspend);
    void StartCrashSequence(float FailZ_Offset);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ResetCrashTrigger();
    void quit from pause menu();
    void FakeFly();
    void StartSuccess();
    void PostgameCam();
    void BndEvt__PlayableArea_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Flight_StageController_S2(int32 EntryPoint);
}; // Size: 0x519

#endif
