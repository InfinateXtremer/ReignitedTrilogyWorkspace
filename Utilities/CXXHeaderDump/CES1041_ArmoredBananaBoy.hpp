#ifndef UE4SS_SDK_CES1041_ArmoredBananaBoy_HPP
#define UE4SS_SDK_CES1041_ArmoredBananaBoy_HPP

class ACES1041_ArmoredBananaBoy_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* CausedRollDamage;                               // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* PS_RollDust;                                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* RollAttack_Loop(Metalhead);                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* RollAttack_In(Metalhead);                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* RollLoopState;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* RollEnterState;                                 // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* SuccessState;                                   // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* Banana;                                               // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToTargetPoint;                              // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* OntoMetalhead;                                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* RollAttackState;                                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* RollState;                                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A70 (size: 0x8)
    float Timeline_1_Alpha_EBCC925244E7AD0D6D920BA2E072B50B;                          // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_EBCC925244E7AD0D6D920BA2E072B50B; // 0x0A7C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A80 (size: 0x8)
    class ABP_CBS1003_Metalhead_C* MetalheadReference;                                // 0x0A88 (size: 0x8)
    FVector InitialLocation;                                                          // 0x0A90 (size: 0xC)
    bool BananaVisible;                                                               // 0x0A9C (size: 0x1)
    float InitialHorizontalDistance;                                                  // 0x0AA0 (size: 0x4)
    class ABP_LS124_SkillPointWatcher_C* SkillPointWatcher;                           // 0x0AA8 (size: 0x8)
    bool MetalHeadEnemy;                                                              // 0x0AB0 (size: 0x1)
    FGameplayTagContainer ChargingSpyroTag;                                           // 0x0AB8 (size: 0x20)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__OntoMetalhead_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__RollAttackState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BoltToMetalhead();
    void BndEvt__MoveToTargetPoint_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void BananaShow();
    void BananaHide();
    void BndEvt__RollEnterState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__RollLoopState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__RollAttack_Loop(Metalhead)_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__RollAttack_In(Metalhead)_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__RollLoopState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__RollAttack_Loop(Metalhead)_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__RollAttack_In(Metalhead)_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CausedRollDamage_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_CES1041_ArmoredBananaBoy(int32 EntryPoint);
}; // Size: 0xAD8

#endif
