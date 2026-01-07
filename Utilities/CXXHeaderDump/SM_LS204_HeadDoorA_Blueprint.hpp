#ifndef UE4SS_SDK_SM_LS204_HeadDoorA_Blueprint_HPP
#define UE4SS_SDK_SM_LS204_HeadDoorA_Blueprint_HPP

class ASM_LS204_HeadDoorA_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0338 (size: 0x8)
    FVector Timeline_0_NewTrack_0_7B59A4E948F87870AB8455BBF3000249;                   // 0x0340 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7B59A4E948F87870AB8455BBF3000249; // 0x034C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0350 (size: 0x8)
    FVector zValue;                                                                   // 0x0358 (size: 0xC)
    class AActor* Save_Actor;                                                         // 0x0368 (size: 0x8)
    int32 Save_Index;                                                                 // 0x0370 (size: 0x4)
    class AEmitter* VFX_Dust;                                                         // 0x0378 (size: 0x8)
    class AActor* BlockerActor;                                                       // 0x0380 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionSetup(bool Active);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionReset(class AActor* RequestActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_SM_LS204_HeadDoorA_Blueprint(int32 EntryPoint);
}; // Size: 0x388

#endif
