#ifndef UE4SS_SDK_BP_LS207_SkillPoint_HPP
#define UE4SS_SDK_BP_LS207_SkillPoint_HPP

class ABP_LS207_SkillPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    int32 Seaweeds;                                                                   // 0x0330 (size: 0x4)
    TArray<class ABP_LS207_DestructibleSeaweed_C*> Seaweed;                           // 0x0338 (size: 0x10)
    TArray<FString> names;                                                            // 0x0348 (size: 0x10)
    bool Init;                                                                        // 0x0358 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void PlayerReady();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS207_SkillPoint(int32 EntryPoint);
}; // Size: 0x359

#endif
