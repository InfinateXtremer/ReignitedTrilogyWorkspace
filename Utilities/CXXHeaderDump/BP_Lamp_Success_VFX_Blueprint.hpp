#ifndef UE4SS_SDK_BP_Lamp_Success_VFX_Blueprint_HPP
#define UE4SS_SDK_BP_Lamp_Success_VFX_Blueprint_HPP

class ABP_Lamp_Success_VFX_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0330 (size: 0x8)
    bool Indoor;                                                                      // 0x0338 (size: 0x1)
    class UParticleSystemComponent* Rainbow;                                          // 0x0340 (size: 0x8)
    bool Saved;                                                                       // 0x0348 (size: 0x1)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Begin();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_Lamp_Success_VFX_Blueprint(int32 EntryPoint);
}; // Size: 0x349

#endif
