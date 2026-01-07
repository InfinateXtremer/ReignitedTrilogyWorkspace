#ifndef UE4SS_SDK_BP_210_Flag_Controller_HPP
#define UE4SS_SDK_BP_210_Flag_Controller_HPP

class ABP_210_Flag_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool Saved;                                                                       // 0x0330 (size: 0x1)
    class AActor* EvilFlag1;                                                          // 0x0338 (size: 0x8)
    class AActor* EvilFlag2;                                                          // 0x0340 (size: 0x8)
    class AActor* GoodFlag1;                                                          // 0x0348 (size: 0x8)
    class AActor* GoodFlag2;                                                          // 0x0350 (size: 0x8)
    FPhasmidSoftReference SpeedwayArch;                                               // 0x0358 (size: 0x28)
    class AActor* Arch_Local;                                                         // 0x0380 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void Begin();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_210_Flag_Controller(int32 EntryPoint);
}; // Size: 0x388

#endif
