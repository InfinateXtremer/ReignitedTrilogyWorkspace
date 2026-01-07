#ifndef UE4SS_SDK_BP_CES2022_GearGrinder_HPP
#define UE4SS_SDK_BP_CES2022_GearGrinder_HPP

class ABP_CES2022_GearGrinder_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackLoopAfterAttack;      // 0x09F8 (size: 0x8)
    class USphereComponent* HeadCollision;                                            // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackLoop;                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleYawn;                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolLoop;                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToRobot;                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle_Pre_Move;                 // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move_Pre_Idle;                 // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleFix;                       // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A68 (size: 0x8)
    float Timeline_1_ZRot_BE6E383443E91114CEFAA49745D2845D;                           // 0x0A70 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_BE6E383443E91114CEFAA49745D2845D; // 0x0A74 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A78 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0A80 (size: 0x10)
    class AActor* MyRobot;                                                            // 0x0A90 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES2022_GearGrinder(int32 EntryPoint);
}; // Size: 0xA98

#endif
