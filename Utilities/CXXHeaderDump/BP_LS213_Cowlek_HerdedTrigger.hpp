#ifndef UE4SS_SDK_BP_LS213_Cowlek_HerdedTrigger_HPP
#define UE4SS_SDK_BP_LS213_Cowlek_HerdedTrigger_HPP

class ABP_LS213_Cowlek_HerdedTrigger_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0328 (size: 0x8)
    int32 herdCount;                                                                  // 0x0330 (size: 0x4)
    class AMission_Master_LS213_Cowlek_C* MM_A;                                       // 0x0338 (size: 0x8)
    class AMission_Master_LS213_Cowlek_C* MM_B;                                       // 0x0340 (size: 0x8)
    bool isActive?;                                                                   // 0x0348 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0350 (size: 0x10)
    int32 HerdTotal;                                                                  // 0x0360 (size: 0x4)
    bool UI_Created;                                                                  // 0x0364 (size: 0x1)
    FPhasmidObjectSaveDataList save data;                                             // 0x0368 (size: 0x10)
    int32 MissionState;                                                               // 0x0378 (size: 0x4)
    class AActor* MissionStart_A;                                                     // 0x0380 (size: 0x8)
    class AActor* MissionStart_B;                                                     // 0x0388 (size: 0x8)

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
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void PlayerReady();
    void UI Control();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_LS213_Cowlek_HerdedTrigger(int32 EntryPoint);
}; // Size: 0x390

#endif
