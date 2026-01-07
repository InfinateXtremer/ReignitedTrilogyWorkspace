#ifndef UE4SS_SDK_BP_CBS1002_Blowhard_HPP
#define UE4SS_SDK_BP_CBS1002_Blowhard_HPP

class ABP_CBS1002_Blowhard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* HurtCapsule;                                             // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* P1_MoveUp;                                      // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* PS_Blowhard_Twister;                              // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* P3_ChangePosition;                              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* P3_MoveUp;                                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* P3_Ranged;                                      // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* P3_PreAttack;                                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* P3_MoveDown;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* P3_Float;                                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* P3_Triggered;                                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* P3_Wait;                                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* Hit2;                                           // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* P2_ChangePosition;                              // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* P2_MoveUp;                                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* P2_Ranged;                                      // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* P2_PreAttack;                                   // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* P2_MoveDown;                                    // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* P2_Float;                                       // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* P2_Triggered;                                   // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* P2_Wait;                                        // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* Hit1;                                           // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* P1_PostAttack;                                  // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* P1_Ranged;                                      // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* P1_PreAttack;                                   // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* P1_MoveDown;                                    // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* P1_Float;                                       // 0x0AC8 (size: 0x8)
    float Lerp_Z_E2B5F24D4456D18EF4CF92BB6AB09DE5;                                    // 0x0AD0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Lerp__Direction_E2B5F24D4456D18EF4CF92BB6AB09DE5; // 0x0AD4 (size: 0x1)
    class UTimelineComponent* Lerp;                                                   // 0x0AD8 (size: 0x8)
    TArray<class AActor*> P2_Triggered_Actors;                                        // 0x0AE0 (size: 0x10)
    TArray<class ATargetPoint*> Phase2_Waypoints;                                     // 0x0AF0 (size: 0x10)
    TArray<class ATargetPoint*> Phase3_Waypoints;                                     // 0x0B00 (size: 0x10)
    int32 ArrayPosition;                                                              // 0x0B10 (size: 0x4)
    float FlySpeedMovingUp;                                                           // 0x0B14 (size: 0x4)
    class ATargetPoint* TeleportLocation;                                             // 0x0B18 (size: 0x8)
    FPhasmidSoftReference DragonStatue;                                               // 0x0B20 (size: 0x28)
    bool restoreOnSave?;                                                              // 0x0B48 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Lerp__FinishedFunc();
    void Lerp__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__FalconEnemyState_Hit1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P2_MoveUp_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P3_MoveUp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P2_MoveDown_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P2_MoveDown_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__P3_MoveDown_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P3_MoveDown_K2Node_ComponentBoundEvent_6_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__Hit2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P1_MoveDown_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__P1_MoveDown_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void PlayerReady();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_CBS1002_Blowhard(int32 EntryPoint);
}; // Size: 0xB49

#endif
