#ifndef UE4SS_SDK_BP_LS109_Achievement_BirdsOfAFeather_HPP
#define UE4SS_SDK_BP_LS109_Achievement_BirdsOfAFeather_HPP

class ABP_LS109_Achievement_BirdsOfAFeather_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    int32 Vultures;                                                                   // 0x0330 (size: 0x4)
    TArray<class ABP_CES1031_Vulture_C*> Vultures List;                               // 0x0338 (size: 0x10)
    bool Init;                                                                        // 0x0348 (size: 0x1)
    TArray<FString> names;                                                            // 0x0350 (size: 0x10)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void PlayerReady();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS109_Achievement_BirdsOfAFeather(int32 EntryPoint);
}; // Size: 0x360

#endif
