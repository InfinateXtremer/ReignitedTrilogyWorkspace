#ifndef UE4SS_SDK_CNS2018_ColossusGoalkeeper_HPP
#define UE4SS_SDK_CNS2018_ColossusGoalkeeper_HPP

class ACNS2018_ColossusGoalkeeper_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Inactive;                                       // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_AttackPlayer;                                   // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_DeflectPuck;                                    // 0x0498 (size: 0x8)
    class UStaticMeshComponent* stick;                                                // 0x04A0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_GoalScored;                                     // 0x04B0 (size: 0x8)
    float AttackOffset_NewTrack_0_AA2C893143BDEDC6DC3E44BCBC1046D0;                   // 0x04B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AttackOffset__Direction_AA2C893143BDEDC6DC3E44BCBC1046D0; // 0x04BC (size: 0x1)
    class UTimelineComponent* AttackOffset;                                           // 0x04C0 (size: 0x8)
    class AActor* PuckActor;                                                          // 0x04C8 (size: 0x8)
    FVector StartPos;                                                                 // 0x04D0 (size: 0xC)
    bool Active;                                                                      // 0x04DC (size: 0x1)
    float MoveValueMax;                                                               // 0x04E0 (size: 0x4)
    class AActor* GoalActor;                                                          // 0x04E8 (size: 0x8)
    float ZAddition;                                                                  // 0x04F0 (size: 0x4)
    bool PlayerTeam;                                                                  // 0x04F4 (size: 0x1)
    class APuck_C* PuckRef;                                                           // 0x04F8 (size: 0x8)
    class AActor* SightActor;                                                         // 0x0500 (size: 0x8)
    float ZRotation;                                                                  // 0x0508 (size: 0x4)
    float IGCDelay;                                                                   // 0x050C (size: 0x4)
    class AActor* IGCPath;                                                            // 0x0510 (size: 0x8)
    class USplineComponent* LocalSpline;                                              // 0x0518 (size: 0x8)
    class AActor* MasterActor;                                                        // 0x0520 (size: 0x8)
    FRotator StickOffset;                                                             // 0x0528 (size: 0xC)
    bool TakingAction;                                                                // 0x0534 (size: 0x1)
    FVector InitPos;                                                                  // 0x0538 (size: 0xC)
    bool GameOver;                                                                    // 0x0544 (size: 0x1)
    bool GoalScored;                                                                  // 0x0545 (size: 0x1)

    void UserConstructionScript();
    void AttackOffset__FinishedFunc();
    void AttackOffset__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void UpdateVal(float Value, float Delta);
    void BndEvt__State_GoalScored_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_GoalScored_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_DeflectPuck_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_AttackPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_IGCEntrance_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void UpdateRotation();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_CNS2018_ColossusGoalkeeper(int32 EntryPoint);
}; // Size: 0x546

#endif
