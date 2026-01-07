#ifndef UE4SS_SDK_202_ReturnPortal_HPP
#define UE4SS_SDK_202_ReturnPortal_HPP

class A202_ReturnPortal_C : public APortalTransporter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1230 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x1238 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x1240 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x1248 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x1250 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x1258 (size: 0x8)
    class UArrowComponent* Arrow1_0;                                                  // 0x1260 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x1268 (size: 0x8)
    float Timeline_0_0_NewTrack_0_4C505CB9427B4C8B5480DA924D24EF96;                   // 0x1270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_4C505CB9427B4C8B5480DA924D24EF96; // 0x1274 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x1278 (size: 0x8)
    float Horiz Dist;                                                                 // 0x1280 (size: 0x4)
    float zDiff;                                                                      // 0x1284 (size: 0x4)
    float fadeTime;                                                                   // 0x1288 (size: 0x4)
    bool RotationSaved;                                                               // 0x128C (size: 0x1)
    FVector ScaleSave;                                                                // 0x1290 (size: 0xC)
    bool DirectLoad;                                                                  // 0x129C (size: 0x1)
    class UFileMediaSource* Level Exit FMV;                                           // 0x12A0 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x12A8 (size: 0x8)
    bool collected;                                                                   // 0x12B0 (size: 0x1)
    class UFileMediaSource* GlimmerExitFMV;                                           // 0x12B8 (size: 0x8)
    class UFileMediaSource* CurrentFMV;                                               // 0x12C0 (size: 0x8)
    bool LevelEndCollected;                                                           // 0x12C8 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void Play Cinematic?(bool& PlayCinematic);
    void Play FMV();
    void Put in Flying transition();
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    void UpdateSaveData();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
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
    void StartTriggerTimelines();
    void UnTriggerPreload();
    void Event Queue Load();
    void OnPartnerPortalFound(class APortal* FoundParter);
    void SavePortalRotation(FRotator CurrentRotation);
    void TI_ReturnHomeMenu();
    void TI_TransitionBeginSource();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteSource();
    void MissionEnd(bool Success, bool LevelEnd);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void TI_LevelEndItemCollected();
    void ExecuteUbergraph_202_ReturnPortal(int32 EntryPoint);
}; // Size: 0x12C9

#endif
