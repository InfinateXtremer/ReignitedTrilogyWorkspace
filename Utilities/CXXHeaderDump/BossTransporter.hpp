#ifndef UE4SS_SDK_BossTransporter_HPP
#define UE4SS_SDK_BossTransporter_HPP

class ABossTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UArrowComponent* ReturnHomeLocator;                                         // 0x0EC8 (size: 0x8)
    class UArrowComponent* CameraLocator;                                             // 0x0ED0 (size: 0x8)
    class UArrowComponent* EntryLocator;                                              // 0x0ED8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0EE0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0EE8 (size: 0x8)
    float Move_Spyro_into_Portal_Fast_230745C64C17B70779EDC0BA3307732B;               // 0x0EF0 (size: 0x4)
    float Move_Spyro_into_Portal_Linear_230745C64C17B70779EDC0BA3307732B;             // 0x0EF4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Move_Spyro_into_Portal__Direction_230745C64C17B70779EDC0BA3307732B; // 0x0EF8 (size: 0x1)
    class UTimelineComponent* Move Spyro into Portal;                                 // 0x0F00 (size: 0x8)
    bool TransportInProgress;                                                         // 0x0F08 (size: 0x1)
    FTransform CameraStartTransform;                                                  // 0x0F10 (size: 0x30)
    class ASimpleCamera_C* PortalEntryCam;                                            // 0x0F40 (size: 0x8)
    FTransform PlayerStartTransform;                                                  // 0x0F50 (size: 0x30)
    FVector FinalScale;                                                               // 0x0F80 (size: 0xC)
    float StartFOV;                                                                   // 0x0F8C (size: 0x4)
    float FinalFOV;                                                                   // 0x0F90 (size: 0x4)
    float fadeTime;                                                                   // 0x0F94 (size: 0x4)
    float PreloadRadius;                                                              // 0x0F98 (size: 0x4)
    bool DataLoaded;                                                                  // 0x0F9C (size: 0x1)
    bool PlayerSpawned;                                                               // 0x0F9D (size: 0x1)
    class UFileMediaSource* IntroBossLevelFMV;                                        // 0x0FA0 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x0FA8 (size: 0x8)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x0FB0 (size: 0x8)

    void PlayFMV();
    void PlayCinematic?(bool& PlayCinematic);
    FTransform GetSpawnTransform();
    bool RemoveDownloadMessage();
    void CheckForPreload();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void Move Spyro into Portal__FinishedFunc();
    void Move Spyro into Portal__UpdateFunc();
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
    void TriggerPreload();
    void UnTriggerPreload();
    void StartTimeline();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ready();
    void HandlePlayerSpawn(float delayDuration);
    void LoadDataRestored();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BossTransporter(int32 EntryPoint);
}; // Size: 0xFB8

#endif
