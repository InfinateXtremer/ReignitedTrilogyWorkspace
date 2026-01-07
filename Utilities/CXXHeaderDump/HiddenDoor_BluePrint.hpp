#ifndef UE4SS_SDK_HiddenDoor_BluePrint_HPP
#define UE4SS_SDK_HiddenDoor_BluePrint_HPP

class AHiddenDoor_BluePrint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Ledges;                                               // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Collision;                                            // 0x0338 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0340 (size: 0x8)
    class AActor* achievement;                                                        // 0x0348 (size: 0x8)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_HiddenDoor_BluePrint(int32 EntryPoint);
}; // Size: 0x350

#endif
