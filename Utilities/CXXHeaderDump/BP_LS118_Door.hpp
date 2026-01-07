#ifndef UE4SS_SDK_BP_LS118_Door_HPP
#define UE4SS_SDK_BP_LS118_Door_HPP

class ABP_LS118_Door_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0458 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0468 (size: 0x8)
    float DoorSpline_Percent_F6F59C7A471C5DBDC0130ABBBBA886AD;                        // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorSpline__Direction_F6F59C7A471C5DBDC0130ABBBBA886AD; // 0x0474 (size: 0x1)
    class UTimelineComponent* DoorSpline;                                             // 0x0478 (size: 0x8)
    class ABP_CBS1002_Blowhard_C* bossRef;                                            // 0x0480 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void DoorSpline__FinishedFunc();
    void DoorSpline__UpdateFunc();
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
    void ExecuteUbergraph_BP_LS118_Door(int32 EntryPoint);
}; // Size: 0x488

#endif
