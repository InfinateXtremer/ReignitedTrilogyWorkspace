#ifndef UE4SS_SDK_LS205_Amper_Cinematic_Controller_HPP
#define UE4SS_SDK_LS205_Amper_Cinematic_Controller_HPP

class ALS205_Amper_Cinematic_Controller_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0328 (size: 0x8)
    class ACNS2073_AmperTheElectroll_C* Amper_Ref;                                    // 0x0330 (size: 0x8)
    class AActor* MissionMaster_Ref;                                                  // 0x0338 (size: 0x8)
    bool SaveRestore;                                                                 // 0x0340 (size: 0x1)

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
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_LS205_Amper_Cinematic_Controller(int32 EntryPoint);
}; // Size: 0x341

#endif
