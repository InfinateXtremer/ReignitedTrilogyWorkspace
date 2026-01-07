#ifndef UE4SS_SDK_BP_LS210_Door_02_HPP
#define UE4SS_SDK_BP_LS210_Door_02_HPP

class ABP_LS210_Door_02_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0450 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0458 (size: 0x8)
    class UStaticMeshComponent* StaticMesh - Door;                                    // 0x0460 (size: 0x8)
    float Timeline_0_0_percent_D6FE21FB4812E4987F9A5E87E48B4494;                      // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_D6FE21FB4812E4987F9A5E87E48B4494; // 0x046C (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0470 (size: 0x8)
    FVector Down_Position;                                                            // 0x0478 (size: 0xC)
    FVector Up_Position;                                                              // 0x0484 (size: 0xC)
    FVector Offset;                                                                   // 0x0490 (size: 0xC)
    bool Active_At_Start;                                                             // 0x049C (size: 0x1)
    class AActor* Destroy_Actor_01;                                                   // 0x04A0 (size: 0x8)
    class AActor* Destroy_Actor_02;                                                   // 0x04A8 (size: 0x8)
    bool Raised;                                                                      // 0x04B0 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
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
    void MissionAlert(class AActor* Actor, int32 Value);
    void PlayerReady();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_LS210_Door_02(int32 EntryPoint);
}; // Size: 0x4B1

#endif
