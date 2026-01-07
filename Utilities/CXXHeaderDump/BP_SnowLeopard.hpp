#ifndef UE4SS_SDK_BP_SnowLeopard_HPP
#define UE4SS_SDK_BP_SnowLeopard_HPP

class ABP_SnowLeopard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToEnd;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitForPlayer;                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPlayer;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointsToFish3;              // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitAtFish3;                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_EatFish3;                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SwipeAtFish3;                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToFish3;                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_EatFish2;                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToFish2;                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SwipeAtFish2;                  // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitAtFish2;                   // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_EatFish1;                      // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToFish1;                   // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SwipeAtFish1;                  // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointsToFish2;              // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitAtFish1;                   // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointsToFish1;              // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait0;                         // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Waypoints0;                    // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AA8 (size: 0x8)
    TArray<class ABP_SnowLeopardFish_C*> Fish;                                        // 0x0AB0 (size: 0x10)
    class AActor* EndPosition;                                                        // 0x0AC0 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool OnDamage(const FGameplayEventData Payload);
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
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_EatFish3_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_EatFish2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_EatFish1_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitAtFish1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitAtFish2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitAtFish3_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wait0_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wait0_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_WaitForPlayer_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitForPlayer_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_SnowLeopard(int32 EntryPoint);
}; // Size: 0xAC8

#endif
