#ifndef UE4SS_SDK_BP_CES1073_GnorcCommando_HPP
#define UE4SS_SDK_BP_CES1073_GnorcCommando_HPP

class ABP_CES1073_GnorcCommando_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackToIdle;                  // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* GunSmoke;                                         // 0x0A00 (size: 0x8)
    class UChildActorComponent* AttackTarget;                                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait;                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackRight;                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackLeft;                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A38 (size: 0x8)
    float AttackRight_NewTrack_0_7BE2F9184E6A445AD08627B0D22328DB;                    // 0x0A40 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AttackRight__Direction_7BE2F9184E6A445AD08627B0D22328DB; // 0x0A44 (size: 0x1)
    class UTimelineComponent* AttackRight;                                            // 0x0A48 (size: 0x8)
    float Rotate_Timeline_Linear_764FE9C947F7F4182AE8AFB20CD44989;                    // 0x0A50 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Rotate_Timeline__Direction_764FE9C947F7F4182AE8AFB20CD44989; // 0x0A54 (size: 0x1)
    class UTimelineComponent* Rotate Timeline;                                        // 0x0A58 (size: 0x8)
    bool Right;                                                                       // 0x0A60 (size: 0x1)
    float AngleRange;                                                                 // 0x0A64 (size: 0x4)
    float AimLeftYaw;                                                                 // 0x0A68 (size: 0x4)
    float AimRightYaw;                                                                // 0x0A6C (size: 0x4)
    float AttackTargetDistance;                                                       // 0x0A70 (size: 0x4)
    float AttackTargetVOffset;                                                        // 0x0A74 (size: 0x4)

    void SetAttackTargetLocation(float Sweep);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Rotate Timeline__FinishedFunc();
    void Rotate Timeline__UpdateFunc();
    void AttackRight__FinishedFunc();
    void AttackRight__UpdateFunc();
    void BndEvt__FalconEnemyState_Ranged_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Begin Fire();
    void End Fire();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackLeft_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1073_GnorcCommando(int32 EntryPoint);
}; // Size: 0xA78

#endif
