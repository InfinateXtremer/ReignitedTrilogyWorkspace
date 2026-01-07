#ifndef UE4SS_SDK_PortalTransporterTarget_Fade_HPP
#define UE4SS_SDK_PortalTransporterTarget_Fade_HPP

class APortalTransporterTarget_Fade_C : public APortalTransporterTargetFade
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UArrowComponent* Point 4;                                                   // 0x0428 (size: 0x8)
    class UArrowComponent* Point 3;                                                   // 0x0430 (size: 0x8)
    class UArrowComponent* Point 2;                                                   // 0x0438 (size: 0x8)
    class UArrowComponent* Point 1;                                                   // 0x0440 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_09D6A7FF4060DDC6E07FB5AC4EBF742F; // 0x0448 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0450 (size: 0x8)
    float Timeline_0_NewTrack_0_43DFCD834C48C774B4B3D0BA74068839;                     // 0x0458 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_43DFCD834C48C774B4B3D0BA74068839; // 0x045C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0460 (size: 0x8)
    FVector ScaleSave;                                                                // 0x0468 (size: 0xC)
    class ASimpleCamera_C* Temp Cam;                                                  // 0x0478 (size: 0x8)
    bool Load Completed;                                                              // 0x0480 (size: 0x1)
    bool PlayerSpawned;                                                               // 0x0481 (size: 0x1)
    bool DataLoaded;                                                                  // 0x0482 (size: 0x1)
    TArray<class UFileMediaSource*> LevelIntroFMV;                                    // 0x0488 (size: 0x10)
    class UTexturePlayerUI_C* UI Ref;                                                 // 0x0498 (size: 0x8)
    bool DirectLoad;                                                                  // 0x04A0 (size: 0x1)
    bool Played Cinematic;                                                            // 0x04A1 (size: 0x1)
    TEnumAsByte<EFalconLoadScreen::Type> Secondary Load Screen;                       // 0x04A2 (size: 0x1)
    class UFileMediaSource* CurrentFMV;                                               // 0x04A8 (size: 0x8)
    int32 currentFMVindex;                                                            // 0x04B0 (size: 0x4)
    float Level LOD Delay;                                                            // 0x04B4 (size: 0x4)
    class ASimpleCamera_C* PreviousCam;                                               // 0x04B8 (size: 0x8)
    bool levelHasEnded;                                                               // 0x04C0 (size: 0x1)
    float PlayerReadyAdvancement;                                                     // 0x04C4 (size: 0x4)
    float Flyin Offset;                                                               // 0x04C8 (size: 0x4)
    bool DoubleFadeIn;                                                                // 0x04CC (size: 0x1)
    class ADirectionalLightDisabler_C* LightDisabler;                                 // 0x04D0 (size: 0x8)

    void DidWeStartFromCurrentCamLoc?(bool& NewParam);
    void PlayCinematic?(bool& PlayCinematic);
    void PlayFMV(bool DirectLoad);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void HandlePlayerSpawn(float delayDuration);
    void Complete Flyin();
    void ready();
    void LoadDataRestored();
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_PortalTransporterTarget_Fade(int32 EntryPoint);
}; // Size: 0x4D8

#endif
