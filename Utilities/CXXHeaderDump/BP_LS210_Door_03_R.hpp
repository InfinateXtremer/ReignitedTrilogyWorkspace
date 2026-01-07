#ifndef UE4SS_SDK_BP_LS210_Door_03_R_HPP
#define UE4SS_SDK_BP_LS210_Door_03_R_HPP

class ABP_LS210_Door_03_R_C : public ABP_SplineMesh_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh - Door;                                    // 0x0358 (size: 0x8)
    float Timeline_0_percent_59797DC644387210A8D2D5BF9B711C6C;                        // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_59797DC644387210A8D2D5BF9B711C6C; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0368 (size: 0x8)
    FRotator Door_Offset_R;                                                           // 0x0370 (size: 0xC)
    FRotator Start_Position;                                                          // 0x037C (size: 0xC)
    FRotator End_Position;                                                            // 0x0388 (size: 0xC)
    bool Active_At_Start;                                                             // 0x0394 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void ExecuteUbergraph_BP_LS210_Door_03_R(int32 EntryPoint);
}; // Size: 0x395

#endif
