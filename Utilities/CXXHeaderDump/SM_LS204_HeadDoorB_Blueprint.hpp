#ifndef UE4SS_SDK_SM_LS204_HeadDoorB_Blueprint_HPP
#define UE4SS_SDK_SM_LS204_HeadDoorB_Blueprint_HPP

class ASM_LS204_HeadDoorB_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_0_F43CD913405B65A5F9F4E898D9DFB209;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F43CD913405B65A5F9F4E898D9DFB209; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    FVector Offset;                                                                   // 0x0350 (size: 0xC)
    FVector StartPos;                                                                 // 0x035C (size: 0xC)
    FVector EndPos;                                                                   // 0x0368 (size: 0xC)
    class AActor* Save_Actor;                                                         // 0x0378 (size: 0x8)
    int32 Save_Index;                                                                 // 0x0380 (size: 0x4)
    class AEmitter* VFX_Dust;                                                         // 0x0388 (size: 0x8)

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
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_SM_LS204_HeadDoorB_Blueprint(int32 EntryPoint);
}; // Size: 0x390

#endif
