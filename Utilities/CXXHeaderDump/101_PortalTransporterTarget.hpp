#ifndef UE4SS_SDK_101_PortalTransporterTarget_HPP
#define UE4SS_SDK_101_PortalTransporterTarget_HPP

class A101_PortalTransporterTarget_C : public APortalTransporterTarget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1078 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x1080 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x1088 (size: 0x8)
    class UFileMediaSource* Media;                                                    // 0x1090 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x1098 (size: 0x8)
    bool collected;                                                                   // 0x10A0 (size: 0x1)
    bool levelHasEnded;                                                               // 0x10A1 (size: 0x1)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x10A8 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
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
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ready();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_101_PortalTransporterTarget(int32 EntryPoint);
}; // Size: 0x10B0

#endif
