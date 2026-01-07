#ifndef UE4SS_SDK_CNS2194_BabyTurtleBiped_HPP
#define UE4SS_SDK_CNS2194_BabyTurtleBiped_HPP

class ACNS2194_BabyTurtleBiped_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle_Hop;                      // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StandUp;                       // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle_Fall;                     // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander;                        // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0938 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0940 (size: 0x8)
    int32 Current Mission ID;                                                         // 0x0948 (size: 0x4)
    int32 Current State ID;                                                           // 0x094C (size: 0x4)
    FPhasmidObjectSaveDataList LocalSaveValue;                                        // 0x0950 (size: 0x10)
    float SaveVariable;                                                               // 0x0960 (size: 0x4)
    class ATargetPoint* Checkpoint_Current;                                           // 0x0968 (size: 0x8)
    class ATargetPoint* Checkpoint_1;                                                 // 0x0970 (size: 0x8)
    class ATargetPoint* Checkpoint_2;                                                 // 0x0978 (size: 0x8)
    class ATargetPoint* Checkpoint_3;                                                 // 0x0980 (size: 0x8)
    class ATargetPoint* Checkpoint_4;                                                 // 0x0988 (size: 0x8)
    class UPhasmidObjectSaveComponent* NewVar_1;                                      // 0x0990 (size: 0x8)
    TArray<TSoftObjectPtr<ATargetPoint>> WanderTargets;                               // 0x0998 (size: 0x10)
    TArray<TSoftObjectPtr<ATargetPoint>> Waypoints;                                   // 0x09A8 (size: 0x10)
    FPhasmidSoftReference Water1;                                                     // 0x09B8 (size: 0x28)
    FPhasmidSoftReference Water2;                                                     // 0x09E0 (size: 0x28)
    class AActor* Water1_Local;                                                       // 0x0A08 (size: 0x8)
    class AActor* Water2_Local;                                                       // 0x0A10 (size: 0x8)

    void SetWaypoints(int32 Index);
    void MoveToNextWaypoint(bool& Result);
    void SetWanderTarget(int32 Index);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconEnemyState_Move_01_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wander_01_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move_01_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Start_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void Begin();
    void ExecuteUbergraph_CNS2194_BabyTurtleBiped(int32 EntryPoint);
}; // Size: 0xA18

#endif
