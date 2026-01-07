#ifndef UE4SS_SDK_BP_CES1020_CannonGnorc_HPP
#define UE4SS_SDK_BP_CES1020_CannonGnorc_HPP

class ABP_CES1020_CannonGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CannonOccupiedAlert;           // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CannonOccupied;                // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* PS_CannonGnorc_Flame_Medium;                      // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* PS_CannonGnorc_Flame_Small;                       // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AdjustCannon;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attach;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CannonCooldown;                // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireCannon;                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitAtCannon;                  // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToCannon;                      // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A60 (size: 0x8)
    bool Attached;                                                                    // 0x0A68 (size: 0x1)
    class ACannon_C* MyCannon;                                                        // 0x0A70 (size: 0x8)
    class ATargetPoint* TargetPoint;                                                  // 0x0A78 (size: 0x8)
    bool InRangeOfCannon;                                                             // 0x0A80 (size: 0x1)
    float CannonFireRate;                                                             // 0x0A84 (size: 0x4)
    float OriginalCannonRotationSpeed;                                                // 0x0A88 (size: 0x4)
    bool DebugPrint;                                                                  // 0x0A8C (size: 0x1)
    bool SpyroCannonAlerted;                                                          // 0x0A8D (size: 0x1)
    bool CheckDeathCollision;                                                         // 0x0A8E (size: 0x1)
    bool DeathCollisionBumped;                                                        // 0x0A8F (size: 0x1)

    void ExtraDeathCollisionCheck(FVector Head Position, float Check Radius);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Attach_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void LightMatch();
    void UseMatch();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AdjustCannon_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1020_CannonGnorc(int32 EntryPoint);
}; // Size: 0xA90

#endif
