#ifndef UE4SS_SDK_BP_CES2209_LandBlubberFirefighter_HPP
#define UE4SS_SDK_BP_CES2209_LandBlubberFirefighter_HPP

class ABP_CES2209_LandBlubberFirefighter_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StartFodder;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TauntFodder;                   // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackFodder;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BullyFodder;                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TargetAttack;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TargetAlertOut;                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TargetAlertLoop;               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TargetAlertIn;                 // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fire_ReturnToOrigin;           // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fire_AttackFire;               // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fire_RunToTarget;              // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleB;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertLoop;                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Squirted;                      // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A90 (size: 0x8)
    class AActor* Campfire;                                                           // 0x0A98 (size: 0x8)
    FVector Origin;                                                                   // 0x0AA0 (size: 0xC)
    bool CampfireLit;                                                                 // 0x0AAC (size: 0x1)
    FName AttachName;                                                                 // 0x0AB0 (size: 0x8)
    int32 ShotCounter;                                                                // 0x0AB8 (size: 0x4)
    bool HasBullyTarget;                                                              // 0x0ABC (size: 0x1)
    FPhasmidSoftReference FodderToBully;                                              // 0x0AC0 (size: 0x28)
    class AActor* FodderActor;                                                        // 0x0AE8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Fire Water Proj();
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Campfire State Change(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Fire_AttackFire_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertLoop_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_BullyFodder_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void FodderStateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2209_LandBlubberFirefighter(int32 EntryPoint);
}; // Size: 0xAF0

#endif
