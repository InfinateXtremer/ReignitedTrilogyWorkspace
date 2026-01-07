#ifndef UE4SS_SDK_BP_CES1068_Dockworker_HPP
#define UE4SS_SDK_BP_CES1068_Dockworker_HPP

class ABP_CES1068_Dockworker_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait;                          // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NoBarrel;                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DelayIdle;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A18 (size: 0x8)
    class ABP_Barrel_Base_C* HeldBarrel;                                              // 0x0A20 (size: 0x8)
    class ABP_CES1068_BarrelSpawner_C* BarrelSpawner;                                 // 0x0A28 (size: 0x8)
    TArray<class ATargetPoint*> BarrelTargetPoints;                                   // 0x0A30 (size: 0x10)
    bool BarrelExplodeOnPathEnd;                                                      // 0x0A40 (size: 0x1)
    float BarrelRadius;                                                               // 0x0A44 (size: 0x4)
    FTransform BarrelStartTransform;                                                  // 0x0A50 (size: 0x30)
    FVector BarrelSpawnerRelativeLocation;                                            // 0x0A80 (size: 0xC)
    class ABP_Barrel_Base_C* DyingBarrel;                                             // 0x0A90 (size: 0x8)
    int32 MidRollDropIndex;                                                           // 0x0A98 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void On Cull(class AActor* Actor, bool bIsCulled);
    void BarrelKnockedAway(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_NoBarrel_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void PickUpBarrel();
    void ThrowBarrel();
    void ExecuteUbergraph_BP_CES1068_Dockworker(int32 EntryPoint);
}; // Size: 0xA9C

#endif
