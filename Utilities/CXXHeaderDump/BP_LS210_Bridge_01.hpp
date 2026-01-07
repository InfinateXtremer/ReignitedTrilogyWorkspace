#ifndef UE4SS_SDK_BP_LS210_Bridge_01_HPP
#define UE4SS_SDK_BP_LS210_Bridge_01_HPP

class ABP_LS210_Bridge_01_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0458 (size: 0x8)
    class UStaticMeshComponent* bridge;                                               // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Carpet;                                               // 0x0468 (size: 0x8)
    float Timeline_0_0_percent_4B3C66204927C77F98718E811CC43248;                      // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_4B3C66204927C77F98718E811CC43248; // 0x0474 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0478 (size: 0x8)
    FVector Start_Position;                                                           // 0x0480 (size: 0xC)
    FVector End_Position;                                                             // 0x048C (size: 0xC)
    FVector Bridge_Offset;                                                            // 0x0498 (size: 0xC)
    bool Active_At_Start;                                                             // 0x04A4 (size: 0x1)
    class AActor* Destroy_Actor_01;                                                   // 0x04A8 (size: 0x8)
    class AActor* Destroy_Actor_02;                                                   // 0x04B0 (size: 0x8)
    bool Extended;                                                                    // 0x04B8 (size: 0x1)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void ExecuteUbergraph_BP_LS210_Bridge_01(int32 EntryPoint);
}; // Size: 0x4B9

#endif
