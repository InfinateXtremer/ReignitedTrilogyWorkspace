#ifndef UE4SS_SDK_BossTransporterTarget_HPP
#define UE4SS_SDK_BossTransporterTarget_HPP

class ABossTransporterTarget_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0EC8 (size: 0x8)
    class UArrowComponent* FinalLocator;                                              // 0x0ED0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0ED8 (size: 0x8)
    bool TransitionInProgress;                                                        // 0x0EE0 (size: 0x1)
    class AGlobalTransporter_C* GlobalTransporter;                                    // 0x0EE8 (size: 0x8)
    bool FallIntoLevel?;                                                              // 0x0EF0 (size: 0x1)
    bool LevelLoaded;                                                                 // 0x0EF1 (size: 0x1)
    float StartHeight;                                                                // 0x0EF4 (size: 0x4)
    class ASimpleCamera_C* EntranceCamera;                                            // 0x0EF8 (size: 0x8)
    FDataTableRowHandle NextHomeworldLevelData;                                       // 0x0F00 (size: 0x10)
    bool WentToHomeworld;                                                             // 0x0F10 (size: 0x1)
    bool PlaySequences?;                                                              // 0x0F11 (size: 0x1)
    FDataTableRowHandle NextHomeworldMasterData;                                      // 0x0F18 (size: 0x10)
    bool Player Spawned;                                                              // 0x0F28 (size: 0x1)
    bool Data Loaded;                                                                 // 0x0F29 (size: 0x1)
    bool FirstLoad?;                                                                  // 0x0F2A (size: 0x1)
    class UFileMediaSource* OutroFMV;                                                 // 0x0F30 (size: 0x8)
    class UDataTable* OutroFMV tfbSubtitleDataTable;                                  // 0x0F38 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x0F40 (size: 0x8)
    TMap<FString, TEnumAsByte<ELevelTransitionType::Type>> level to transition;       // 0x0F48 (size: 0x50)
    float LoadNextLevelDelay;                                                         // 0x0F98 (size: 0x4)
    bool Kill Music On Outro FMV;                                                     // 0x0F9C (size: 0x1)
    class UFileMediaSource* CreditsFMV;                                               // 0x0FA0 (size: 0x8)
    bool CreditsPlayed;                                                               // 0x0FA8 (size: 0x1)
    class UAkAudioEvent* CreditsMusic;                                                // 0x0FB0 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void PlayCredits();
    void PlayCredits?(bool& Play Credits?);
    FTransform GetSpawnTransform();
    void PlayFMV();
    void PlayCinematic?(bool& PlayCinematic);
    void UpdateSaveData();
    void SetPlayerAtEndPoint();
    void CheckForPlayerStart(bool& Out);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
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
    void TI_ReturnHomeMenu();
    void TI_LoadNextHomeworld();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void HandlePlayerSpawn(float delayDuration);
    void Return Control();
    void ready();
    void LoadDataRestored();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BossTransporterTarget(int32 EntryPoint);
}; // Size: 0xFB8

#endif
