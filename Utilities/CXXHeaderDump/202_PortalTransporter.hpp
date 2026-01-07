#ifndef UE4SS_SDK_202_PortalTransporter_HPP
#define UE4SS_SDK_202_PortalTransporter_HPP

class A202_PortalTransporter_C : public APortalTransporter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1230 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x1238 (size: 0x8)
    class UArrowComponent* GroundPlacementLocation;                                   // 0x1240 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x1248 (size: 0x8)
    class UFileMediaSource* Level Intro FMV;                                          // 0x1250 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x1258 (size: 0x8)
    bool collected;                                                                   // 0x1260 (size: 0x1)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x1268 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void Play FMV();
    void PlayCinematic?(bool& Play Cinematic);
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
    void HandlePlayerSpawn(float delayDuration);
    void MissionEnd(bool Success, bool LevelEnd);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_202_PortalTransporter(int32 EntryPoint);
}; // Size: 0x1270

#endif
