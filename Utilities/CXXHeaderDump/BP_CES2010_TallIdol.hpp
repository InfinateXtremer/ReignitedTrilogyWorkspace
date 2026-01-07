#ifndef UE4SS_SDK_BP_CES2010_TallIdol_HPP
#define UE4SS_SDK_BP_CES2010_TallIdol_HPP

class ABP_CES2010_TallIdol_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolSimpleAttack;            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolSimpleWindup;            // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SimpleAttack;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SimpleWindup;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPreAttackToIdle;         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPreAttackWindupLoop_Ready; // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPreAttackWindupLoop_Minimum; // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolWindup;                  // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackToIdle;               // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackWindupLoop_Ready;     // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackWindup;               // 0x0A48 (size: 0x8)
    class UParticleSystemComponent* MarshMallowFlame;                                 // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPostAttack;              // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPreAttack;               // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolAttack;                  // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackWindupLoop_Minimum;   // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AA8 (size: 0x8)
    class UMaterialInstanceDynamic* EquipmentMat;                                     // 0x0AB0 (size: 0x8)
    class ABP_Base_Enemy_C* NPCref;                                                   // 0x0AB8 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Patrol_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2010_TallIdol(int32 EntryPoint);
}; // Size: 0xAC0

#endif
