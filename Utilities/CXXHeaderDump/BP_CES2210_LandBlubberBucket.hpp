#ifndef UE4SS_SDK_BP_CES2210_LandBlubberBucket_HPP
#define UE4SS_SDK_BP_CES2210_LandBlubberBucket_HPP

class ABP_CES2210_LandBlubberBucket_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathPlus;                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeStart;                     // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* PS_LandBlubberBucket_Struggle;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BullyTarget;                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunToVictim;                   // 0x0A18 (size: 0x8)
    class UParticleSystemComponent* PS_LandBlubberBucket_Idle_Head;                   // 0x0A20 (size: 0x8)
    class UParticleSystemComponent* PS_LandBlubberBucket_Idle_Bucket;                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeWaterReact;                // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeCampfire2Attack;           // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeCampfire2GetIntoPosition;  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeCampfire1Attack;           // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeCampfire1GetIntoPosition;  // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeIdle;                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnToOrigin;                // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackTarget;                  // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunToTarget;                   // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleB;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertLoop;                     // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0AB8 (size: 0x8)
    class ACampfireWood_WithStates_C* Campfire1;                                      // 0x0AC0 (size: 0x8)
    class ACampfireWood_WithStates_C* SpecialCampfire2;                               // 0x0AC8 (size: 0x8)
    class ABP_CES2209_LandBlubberFirefighter_C* ActorToBully;                         // 0x0AD0 (size: 0x8)
    bool Campfire1 Lit;                                                               // 0x0AD8 (size: 0x1)
    bool Campfire2 Lit;                                                               // 0x0AD9 (size: 0x1)
    bool IsMarathonMan;                                                               // 0x0ADA (size: 0x1)
    FVector Origin;                                                                   // 0x0ADC (size: 0xC)
    bool BullyTargetIsDead;                                                           // 0x0AE8 (size: 0x1)
    FPhasmidObjectSaveDataList PooPoo Data;                                           // 0x0AF0 (size: 0x10)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Campfire1 State Change(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Campfire2 State Change(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FleeIdle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void FireFighter State Change(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: SuperLaunchPoof_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: SuperLaunchTwinkle_K2Node_ComponentBoundEvent_9_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2210_LandBlubberBucket(int32 EntryPoint);
}; // Size: 0xB00

#endif
