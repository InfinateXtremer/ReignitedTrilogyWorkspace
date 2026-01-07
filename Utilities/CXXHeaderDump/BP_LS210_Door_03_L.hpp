#ifndef UE4SS_SDK_BP_LS210_Door_03_L_HPP
#define UE4SS_SDK_BP_LS210_Door_03_L_HPP

class ABP_LS210_Door_03_L_C : public ABP_SplineMesh_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMesh - Door;                                    // 0x0358 (size: 0x8)
    float Timeline_1_percent_5D2336134C40541345D291AED842E164;                        // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_5D2336134C40541345D291AED842E164; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0368 (size: 0x8)
    FRotator Start_Position;                                                          // 0x0370 (size: 0xC)
    FRotator End_Position;                                                            // 0x037C (size: 0xC)
    FRotator Door_Offset_L;                                                           // 0x0388 (size: 0xC)
    bool Active_At_Start;                                                             // 0x0394 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
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
    void PlayerReady();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS210_Door_03_L(int32 EntryPoint);
}; // Size: 0x395

#endif
