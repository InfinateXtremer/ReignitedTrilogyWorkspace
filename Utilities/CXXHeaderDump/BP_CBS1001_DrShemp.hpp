#ifndef UE4SS_SDK_BP_CBS1001_DrShemp_HPP
#define UE4SS_SDK_BP_CBS1001_DrShemp_HPP

class ABP_CBS1001_DrShemp_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle1AlertA;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start1PostMoveAlertA;          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start1PostMove;                // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start1MoveIntoPosition;        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start1AlertA;                  // 0x0A18 (size: 0x8)
    class UParticleSystemComponent* AmbientSkullVFX;                                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertC3;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertB3;                       // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertA3;                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start3;                        // 0x0A40 (size: 0x8)
    class UChildActorComponent* LookAtTargetForDeath;                                 // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertB2;                       // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertA2;                       // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start2;                        // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnGems;                     // 0x0A68 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start1;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit2;                      // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit1;                      // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToAttack;                  // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery3;                     // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack3;                       // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt3;                        // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle3;                         // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move2;                         // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery2;                     // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack2;                       // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt2;                        // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0AE0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move1;                         // 0x0AE8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee2;                         // 0x0AF0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack1;                       // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt1;                        // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee1;                         // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle1;                         // 0x0B10 (size: 0x8)
    FVector CurrentArenaCenter;                                                       // 0x0B18 (size: 0xC)
    float angle;                                                                      // 0x0B24 (size: 0x4)
    class APhasmidTaggedTargetPoint* CenterTargetPoint;                               // 0x0B28 (size: 0x8)
    int32 CurPhase;                                                                   // 0x0B30 (size: 0x4)
    bool Exposed;                                                                     // 0x0B34 (size: 0x1)
    class ASK_LS112_Bridge_A_Blueprint_C* BridgeA;                                    // 0x0B38 (size: 0x8)
    class ASK_LS112_Bridge_B_Blueprint_C* BridgeB;                                    // 0x0B40 (size: 0x8)
    class ASK_LS112_Bridge_C_Blueprint_C* BridgeC;                                    // 0x0B48 (size: 0x8)
    bool DidSpyroTakeDamage?;                                                         // 0x0B50 (size: 0x1)
    bool Phase3SpyroTookDamage;                                                       // 0x0B51 (size: 0x1)
    float Phase1ArenaRadius;                                                          // 0x0B54 (size: 0x4)
    class APhasmidTaggedTargetPoint* AttackTargetPoint;                               // 0x0B58 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Butt Flamed();
    void ButtExposed();
    void ButtSafe();
    void BndEvt__FalconEnemyState_Attack2_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack2_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Attack3_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack3_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_TakeHit1_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TakeHit2_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveDestroyed();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void DamageDealtToThing(class AActor* Actor, const FGameplayEventData Payload);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Move2_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move1_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveToAttack_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Start2_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Start3_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CBS1001_DrShemp(int32 EntryPoint);
}; // Size: 0xB60

#endif
