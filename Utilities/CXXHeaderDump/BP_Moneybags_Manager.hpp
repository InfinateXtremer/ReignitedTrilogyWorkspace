#ifndef UE4SS_SDK_BP_Moneybags_Manager_HPP
#define UE4SS_SDK_BP_Moneybags_Manager_HPP

class ABP_Moneybags_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool Active_At_Start;                                                             // 0x0330 (size: 0x1)
    class AActor* Destroy_Actor_01;                                                   // 0x0338 (size: 0x8)
    class AActor* Destroy_Actor_02;                                                   // 0x0340 (size: 0x8)
    TSoftObjectPtr<APortal> Portal_Report;                                            // 0x0348 (size: 0x28)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
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
    void PlayerReady();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_Moneybags_Manager(int32 EntryPoint);
}; // Size: 0x370

#endif
