#ifndef UE4SS_SDK_BP_CBS1005_GnastyGnorc_HPP
#define UE4SS_SDK_BP_CBS1005_GnastyGnorc_HPP

class ABP_CBS1005_GnastyGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x09F8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttackWait01;              // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RangedWait01;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait02Turn;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToWait01;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReverseResetFlee01;            // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TakeHit;                       // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LastStandPostAttack;           // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LastStandRanged;               // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee02Wait;                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ResetFlee01;                   // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A58 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LastStand;                     // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee02;                        // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait02;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait01;                        // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee01;                        // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleWait;                      // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LastStandMelee;                // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AC0 (size: 0x8)
    class AActor* IGC_1;                                                              // 0x0AC8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0AD0 (size: 0x10)
    FPhasmidSoftReference IGC_Controller_1;                                           // 0x0AE0 (size: 0x28)
    FPhasmidSoftReference IGC_Controller_2;                                           // 0x0B08 (size: 0x28)
    bool HurtSpyro;                                                                   // 0x0B30 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool OnDealDamage(const FGameplayEventData Payload);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee02_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee01_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Flee01_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Flee02_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ResetFlee01_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ResetFlee01_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ReverseResetFlee01_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ReverseResetFlee01_K2Node_ComponentBoundEvent_4_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_TakeHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RangedWait01_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CBS1005_GnastyGnorc(int32 EntryPoint);
}; // Size: 0xB31

#endif
