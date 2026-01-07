#ifndef UE4SS_SDK_BP_SP3_OpeningCinematic_HPP
#define UE4SS_SDK_BP_SP3_OpeningCinematic_HPP

class ABP_SP3_OpeningCinematic_C : public ASP3_CinematicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0368 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0370 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0378 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0380 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x0388 (size: 0x8)
    int32 Movie Index;                                                                // 0x0390 (size: 0x4)
    class UUI_SP3_MovieIntroText_C* UI Message;                                       // 0x0398 (size: 0x8)
    FString Previous Music;                                                           // 0x03A0 (size: 0x10)
    bool collected;                                                                   // 0x03B0 (size: 0x1)
    bool SceneStarted;                                                                // 0x03B1 (size: 0x1)
    bool levelHasEnded;                                                               // 0x03B2 (size: 0x1)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x03B8 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void CancelInventoryScreen();
    void EnableSkip();
    void EndLoadingScreen(TEnumAsByte<EFalconLoadScreen::Type> Message);
    void StartLoadingScreen(TEnumAsByte<EFalconLoadScreen::Type> Message);
    void CreateMovieElement(class UFileMediaSource* Media FIle, class UDataTable* tfbSubtitleDataTable);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void OnSkip();
    void PlayerReadyS3();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_SP3_OpeningCinematic(int32 EntryPoint);
}; // Size: 0x3C0

#endif
