#ifndef UE4SS_SDK_202_PortalTransporterTarget_Fade_HPP
#define UE4SS_SDK_202_PortalTransporterTarget_Fade_HPP

class A202_PortalTransporterTarget_Fade_C : public APortalTransporterTargetFade
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0428 (size: 0x8)
    class UArrowComponent* Point 4;                                                   // 0x0430 (size: 0x8)
    class UArrowComponent* Point 3;                                                   // 0x0438 (size: 0x8)
    class UArrowComponent* Point 2;                                                   // 0x0440 (size: 0x8)
    class UArrowComponent* Point 1;                                                   // 0x0448 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_7E657A5945C30CDA9779D79972F5015F; // 0x0450 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0458 (size: 0x8)
    float Timeline_0_NewTrack_0_21A77AD74E994787D84F6FB98C5AAC05;                     // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_21A77AD74E994787D84F6FB98C5AAC05; // 0x0464 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0468 (size: 0x8)
    FVector ScaleSave;                                                                // 0x0470 (size: 0xC)
    class ASimpleCamera_C* Temp Cam;                                                  // 0x0480 (size: 0x8)
    bool Load Completed;                                                              // 0x0488 (size: 0x1)
    bool PlayerSpawned;                                                               // 0x0489 (size: 0x1)
    bool DataLoaded;                                                                  // 0x048A (size: 0x1)
    TArray<class UFileMediaSource*> LevelIntroFMV;                                    // 0x0490 (size: 0x10)
    class UTexturePlayerUI_C* UI Ref;                                                 // 0x04A0 (size: 0x8)
    bool DirectLoad;                                                                  // 0x04A8 (size: 0x1)
    bool Played Cinematic;                                                            // 0x04A9 (size: 0x1)
    TEnumAsByte<EFalconLoadScreen::Type> Secondary Load Screen;                       // 0x04AA (size: 0x1)
    class UFileMediaSource* CurrentFMV;                                               // 0x04B0 (size: 0x8)
    int32 currentFMVindex;                                                            // 0x04B8 (size: 0x4)
    float Level LOD Delay;                                                            // 0x04BC (size: 0x4)
    class UFileMediaSource* GlimmerLevelIntroFMV;                                     // 0x04C0 (size: 0x8)
    bool collected;                                                                   // 0x04C8 (size: 0x1)
    bool levelHasEnded;                                                               // 0x04C9 (size: 0x1)
    TArray<class UDataTable*> LevelIntroSubtitleDataTables;                           // 0x04D0 (size: 0x10)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x04E0 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
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
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void CleanUp();
    void ExecuteUbergraph_202_PortalTransporterTarget_Fade(int32 EntryPoint);
}; // Size: 0x4E8

#endif
