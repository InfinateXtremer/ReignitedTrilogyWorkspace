#ifndef UE4SS_SDK_BP_LS212_SkillPointA_HPP
#define UE4SS_SDK_BP_LS212_SkillPointA_HPP

class ABP_LS212_SkillPointA_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    int32 CatBat;                                                                     // 0x0330 (size: 0x4)
    TArray<class ACES2029_Catbat_C*> Catbats;                                         // 0x0338 (size: 0x10)
    TArray<FString> names;                                                            // 0x0348 (size: 0x10)
    bool Init;                                                                        // 0x0358 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void PlayerReady();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS212_SkillPointA(int32 EntryPoint);
}; // Size: 0x359

#endif
