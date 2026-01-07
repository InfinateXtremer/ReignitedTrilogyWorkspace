#ifndef UE4SS_SDK_BP_CES2008_ScarletLizard_HPP
#define UE4SS_SDK_BP_CES2008_ScarletLizard_HPP

class ABP_CES2008_ScarletLizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AppearInvul;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HideDelay;                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt4;                        // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt3;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hidden;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt2;                        // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToHole;                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move1;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move2;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hide;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Appear;                        // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x0A68 (size: 0x8)
    int32 NumWaypoints;                                                               // 0x0A70 (size: 0x4)
    class APhasmidTaggedTargetPoint* TargetPointC;                                    // 0x0A78 (size: 0x8)
    bool Flying;                                                                      // 0x0A80 (size: 0x1)
    bool Active;                                                                      // 0x0A81 (size: 0x1)
    bool HidingFromPlayer;                                                            // 0x0A82 (size: 0x1)
    class AActor* HideSpot;                                                           // 0x0A88 (size: 0x8)
    FVector HideSpotLoc;                                                              // 0x0A90 (size: 0xC)
    bool HideAtStart;                                                                 // 0x0A9C (size: 0x1)
    FTransform Origin;                                                                // 0x0AA0 (size: 0x30)
    FTransform HideSpotTransform;                                                     // 0x0AD0 (size: 0x30)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Appear_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Hidden_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Begin();
    void BndEvt__FalconEnemyState_HideDelay_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void GameStateChange(EFalconGameState PrevState, EFalconGameState NextState);
    void ExecuteUbergraph_BP_CES2008_ScarletLizard(int32 EntryPoint);
}; // Size: 0xB00

#endif
