#ifndef UE4SS_SDK_SaveGame_Mgr_Base_HPP
#define UE4SS_SDK_SaveGame_Mgr_Base_HPP

class ASaveGame_Mgr_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* txt_Type;                                             // 0x0320 (size: 0x8)
    class UTextRenderComponent* txt_savegame;                                         // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool PreviouslyCollected;                                                         // 0x0338 (size: 0x1)
    float DestroyDelay;                                                               // 0x033C (size: 0x4)
    float NotifyDelay;                                                                // 0x0340 (size: 0x4)
    TArray<class AActor*> DestroyActors;                                              // 0x0348 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x0358 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0368 (size: 0x4)
    bool DestroyImmediatelyOnSaveData;                                                // 0x036C (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void ExecuteSaveGame(int32 Value);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_SaveGame_Mgr_Base(int32 EntryPoint);
}; // Size: 0x36D

#endif
