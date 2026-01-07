#ifndef UE4SS_SDK_BP_CES1070_TNTWrangler_HPP
#define UE4SS_SDK_BP_CES1070_TNTWrangler_HPP

class ABP_CES1070_TNTWrangler_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackOut;                  // 0x09F8 (size: 0x8)
    class UChildActorComponent* BarrelPosition;                                       // 0x0A00 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0A08 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0A10 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackBurned;               // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Burned;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackBurned;                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleBurned;                    // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A60 (size: 0x8)
    float Timeline_1_ZRot_A7C63BC948FFD2C6CE0974B76453D973;                           // 0x0A68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A7C63BC948FFD2C6CE0974B76453D973; // 0x0A6C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A70 (size: 0x8)
    class ABP_Barrel_Base_C* MyBarrel;                                                // 0x0A78 (size: 0x8)
    bool MetalBarrel;                                                                 // 0x0A80 (size: 0x1)
    TSubclassOf<class ABP_Barrel_Base_C> BarrelToSpawn;                               // 0x0A88 (size: 0x8)
    class UChildActorComponent* BarrelChildActorComp;                                 // 0x0A90 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BarrelBoom(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Burned_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackBurned_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackBurned_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1070_TNTWrangler(int32 EntryPoint);
}; // Size: 0xA98

#endif
