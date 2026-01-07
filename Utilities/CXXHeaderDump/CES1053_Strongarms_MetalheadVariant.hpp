#ifndef UE4SS_SDK_CES1053_Strongarms_MetalheadVariant_HPP
#define UE4SS_SDK_CES1053_Strongarms_MetalheadVariant_HPP

class ACES1053_Strongarms_MetalheadVariant_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_RollDust;                                      // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToTargetPoint2;                             // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* RollAttack_In;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* RollAttack_Loop;                                // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* OntoMetalhead;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToTargetPoint;                              // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* WakeUpState;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* SleepingState;                                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* IdleDelightState;                               // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* LaunchState;                                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A60 (size: 0x8)
    float Timeline_1_Alpha_ED2B500D4A3964089932B69AA9449816;                          // 0x0A68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_ED2B500D4A3964089932B69AA9449816; // 0x0A6C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A70 (size: 0x8)
    class ABP_CBS1003_Metalhead_C* MetalheadReference;                                // 0x0A78 (size: 0x8)
    FVector InitialStrongArmsLocation;                                                // 0x0A80 (size: 0xC)
    float InitialStrongArmsHorizontalDistance;                                        // 0x0A8C (size: 0x4)
    class ABP_LS124_SkillPointWatcher_C* SkillPointWatcher;                           // 0x0A90 (size: 0x8)
    FGameplayTagContainer ChargingSpyroTag;                                           // 0x0A98 (size: 0x20)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BoltToMetalhead();
    void BndEvt__RollAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__RollAttack_In_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__RollAttack_Loop_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void BndEvt__OntoMetalhead_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CES1053_Strongarms_MetalheadVariant(int32 EntryPoint);
}; // Size: 0xAB8

#endif
