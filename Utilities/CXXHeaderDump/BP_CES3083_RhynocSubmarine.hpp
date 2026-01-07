#ifndef UE4SS_SDK_BP_CES3083_RhynocSubmarine_HPP
#define UE4SS_SDK_BP_CES3083_RhynocSubmarine_HPP

class ABP_CES3083_RhynocSubmarine_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class USceneComponent* MineAttach;                                                // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeOnPath;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPath;                    // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A40 (size: 0x8)
    bool TargetedByPlayer;                                                            // 0x0A48 (size: 0x1)
    FTimerHandle AttackTimer;                                                         // 0x0A50 (size: 0x8)
    FString PlaceholderName;                                                          // 0x0A58 (size: 0x10)
    class ABP_CES3083_RhynocSubPlaceholder_C* PlaceholderActor;                       // 0x0A68 (size: 0x8)
    int32 GemIndex;                                                                   // 0x0A70 (size: 0x4)
    int32 GemCount;                                                                   // 0x0A74 (size: 0x4)
    TSubclassOf<class AActor> NewVar_0;                                               // 0x0A78 (size: 0x8)
    bool MineLayerActive;                                                             // 0x0A80 (size: 0x1)
    FTimerHandle MineTimer;                                                           // 0x0A88 (size: 0x8)
    class ABP_CES3083_RhynocSubMine_C* CurrentMine;                                   // 0x0A90 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void InitializeFromPlaceholder(class AActor* Placeholder);
    void SetTargeted(bool IsTargeted);
    void Check Target();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void LayMine();
    void Open Hatch();
    void ExecuteUbergraph_BP_CES3083_RhynocSubmarine(int32 EntryPoint);
}; // Size: 0xA98

#endif
