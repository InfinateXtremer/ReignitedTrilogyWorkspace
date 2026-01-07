#ifndef UE4SS_SDK_BP_CBS2191_Gulp_Pterodactyl_HPP
#define UE4SS_SDK_BP_CBS2191_Gulp_Pterodactyl_HPP

class ABP_CBS2191_Gulp_Pterodactyl_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* Shadow;                                           // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FlyB;                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FlyA;                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Leave;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DropEgg;                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Invisible;                     // 0x0A20 (size: 0x8)
    TArray<class ATargetPoint*> ExternalPoints;                                       // 0x0A28 (size: 0x10)
    TArray<class APhasmidPatrolPath*> CirclePaths;                                    // 0x0A38 (size: 0x10)
    class ABP_CBS2002_GulpEgg_C* CarriedEgg;                                          // 0x0A48 (size: 0x8)
    class ABP_CBS2002_EggManager_C* EggManager;                                       // 0x0A50 (size: 0x8)
    class ABP_CBS2002_Gulp_C* Gulp;                                                   // 0x0A58 (size: 0x8)
    float FixedShadowZ;                                                               // 0x0A60 (size: 0x4)
    bool Screeched;                                                                   // 0x0A64 (size: 0x1)

    void PositionShadow();
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Invisible_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Invisible_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BeginFly();
    void BndEvt__FalconEnemyState_Leave_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DropEgg_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BreakCarriedEgg();
    void ExecuteUbergraph_BP_CBS2191_Gulp_Pterodactyl(int32 EntryPoint);
}; // Size: 0xA65

#endif
