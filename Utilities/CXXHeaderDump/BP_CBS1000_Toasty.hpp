#ifndef UE4SS_SDK_BP_CBS1000_Toasty_HPP
#define UE4SS_SDK_BP_CBS1000_Toasty_HPP

class ABP_CBS1000_Toasty_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move2Helper;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HurtSpyro3;                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HurtSpyro2;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HurtSpyro1;                    // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitReact1;                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapReaction;             // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwap;                     // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackIn3;                  // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* ScytheMesh;                                           // 0x0A38 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery3;                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack3;                       // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack3;                    // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee3;                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle3;                         // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move2;                         // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit2;                      // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery2;                     // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack2;                       // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack2;                    // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee2;                         // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move1;                         // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit1;                      // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery1;                     // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack1;                       // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack1;                    // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee1;                         // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle1;                         // 0x0AE0 (size: 0x8)
    class APhasmidTaggedTargetPoint* ArenaCenter1;                                    // 0x0AE8 (size: 0x8)
    class APhasmidTaggedTargetPoint* ArenaCenter2;                                    // 0x0AF0 (size: 0x8)
    class APhasmidTaggedTargetPoint* ArenaCenter3;                                    // 0x0AF8 (size: 0x8)
    FVector CurrentArenaCenter;                                                       // 0x0B00 (size: 0xC)
    bool CanFlee;                                                                     // 0x0B0C (size: 0x1)
    float angle;                                                                      // 0x0B10 (size: 0x4)
    class UParticleSystemComponent* LoopingSmoke;                                     // 0x0B18 (size: 0x8)
    bool AchievementCheck_DamagedPlayer;                                              // 0x0B20 (size: 0x1)

    bool OnDealDamage(const FGameplayEventData Payload);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Flee2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee3_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle3_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack1_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack2_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack3_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TakeHit2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_TakeHit2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CBS1000_Toasty(int32 EntryPoint);
}; // Size: 0xB21

#endif
