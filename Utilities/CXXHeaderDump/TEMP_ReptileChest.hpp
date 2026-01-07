#ifndef UE4SS_SDK_TEMP_ReptileChest_HPP
#define UE4SS_SDK_TEMP_ReptileChest_HPP

class ATEMP_ReptileChest_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Boom;                          // 0x0910 (size: 0x8)
    class UDestructibleComponent* SM_LS206_SilverReptileChest_DM_DM;                  // 0x0918 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Spawn;                         // 0x0928 (size: 0x8)
    class UFalconDeathStateComponent* FalconDeathState;                               // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Chest;                                                // 0x0938 (size: 0x8)
    class ATargetPoint* WP_01;                                                        // 0x0940 (size: 0x8)
    class ATargetPoint* WP_02;                                                        // 0x0948 (size: 0x8)
    class ATargetPoint* WP_03;                                                        // 0x0950 (size: 0x8)
    bool Saved;                                                                       // 0x0958 (size: 0x1)

    void UserConstructionScript();
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
    void BndEvt__FalconEnemyState_Spawn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Boom_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Begin();
    void ExecuteUbergraph_TEMP_ReptileChest(int32 EntryPoint);
}; // Size: 0x959

#endif
