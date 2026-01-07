#ifndef UE4SS_SDK_BP_CES1028_ArmoredGnorc_HPP
#define UE4SS_SDK_BP_CES1028_ArmoredGnorc_HPP

class ABP_CES1028_ArmoredGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_GemDropState;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpecialFall;                   // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit2;                      // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AirStruggle;                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fall;                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit;                       // 0x0A48 (size: 0x8)
    float AttackZRot_ZRot_376065B84802C5E272AB2BA2D16A18DC;                           // 0x0A50 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AttackZRot__Direction_376065B84802C5E272AB2BA2D16A18DC; // 0x0A54 (size: 0x1)
    class UTimelineComponent* AttackZRot;                                             // 0x0A58 (size: 0x8)
    FVector Position;                                                                 // 0x0A60 (size: 0xC)
    FVector prevposition;                                                             // 0x0A6C (size: 0xC)
    float dist;                                                                       // 0x0A78 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void AttackZRot__FinishedFunc();
    void AttackZRot__UpdateFunc();
    void BndEvt__FalconEnemyState_Fall_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void TurnOnFriction();
    void BndEvt__FalconEnemyState_TakeHit2_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_TakeHit2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SpecialFall_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_GemDropState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1028_ArmoredGnorc(int32 EntryPoint);
}; // Size: 0xA7C

#endif
