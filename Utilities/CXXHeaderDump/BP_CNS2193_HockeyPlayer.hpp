#ifndef UE4SS_SDK_BP_CNS2193_HockeyPlayer_HPP
#define UE4SS_SDK_BP_CNS2193_HockeyPlayer_HPP

class ABP_CNS2193_HockeyPlayer_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UBP_StateComponent_C* State_Inactive;                                       // 0x09F8 (size: 0x8)
    class UBP_StateComponent_C* State_GameStart;                                      // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* HockeyStick;                                          // 0x0A08 (size: 0x8)
    class UBP_StateComponent_C* IGC_MoveToPos;                                        // 0x0A10 (size: 0x8)
    class UBP_StateComponent_C* AttackPlayer;                                         // 0x0A18 (size: 0x8)
    class UBP_StateComponent_C* MoveToPlayer;                                         // 0x0A20 (size: 0x8)
    class UBP_StateComponent_C* State_GoalScored2;                                    // 0x0A28 (size: 0x8)
    class UBP_StateComponent_C* State_GoalScored;                                     // 0x0A30 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0A38 (size: 0x8)
    class UBP_StateComponent_C* State_AimAtGoal;                                      // 0x0A40 (size: 0x8)
    class UBP_StateComponent_C* State_WaitForShot;                                    // 0x0A48 (size: 0x8)
    class UBP_StateComponent_C* State_ShootPuck;                                      // 0x0A50 (size: 0x8)
    class UBP_StateComponent_C* State_DefendGoal;                                     // 0x0A58 (size: 0x8)
    class UBP_StateComponent_C* State_MoveToShootSpot;                                // 0x0A60 (size: 0x8)
    class UBP_StateComponent_C* State_MoveToPuck;                                     // 0x0A68 (size: 0x8)
    class UBP_StateComponent_C* State_Default;                                        // 0x0A70 (size: 0x8)
    class AActor* PuckActor;                                                          // 0x0A78 (size: 0x8)
    TArray<class AActor*> ShootSpots;                                                 // 0x0A80 (size: 0x10)
    TArray<class AActor*> AimSpots;                                                   // 0x0A90 (size: 0x10)
    bool Active;                                                                      // 0x0AA0 (size: 0x1)
    float MoveValueMax;                                                               // 0x0AA4 (size: 0x4)
    FVector StartPos;                                                                 // 0x0AA8 (size: 0xC)
    bool Defending;                                                                   // 0x0AB4 (size: 0x1)
    float ZAddition;                                                                  // 0x0AB8 (size: 0x4)
    class APhasmidPatrolPath* EntryPath;                                              // 0x0AC0 (size: 0x8)
    bool HasPuck;                                                                     // 0x0AC8 (size: 0x1)
    class AActor* TargetSpot;                                                         // 0x0AD0 (size: 0x8)
    class AActor* TriggerVolume;                                                      // 0x0AD8 (size: 0x8)
    bool OutOfTheBox;                                                                 // 0x0AE0 (size: 0x1)
    FVector InitPosition;                                                             // 0x0AE4 (size: 0xC)
    bool GameOver;                                                                    // 0x0AF0 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_MoveToPuck_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PuckChangedState(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void MissionSetup(bool Active);
    void BndEvt__State_MoveToShootSpot_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReset(class AActor* RequestActor);
    void BndEvt__State_WaitForShot_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_WaitForShot_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_DefendGoal_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__IGC_MoveToPos_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__IGC_MoveToPos_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void PuckDistanceCheck();
    void BndEvt__State_AimAtGoal_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_AimAtGoal_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExitVolume(class AActor* OverlappedActor, class AActor* OtherActor);
    void EnterVolume(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_CNS2193_HockeyPlayer(int32 EntryPoint);
}; // Size: 0xAF1

#endif
