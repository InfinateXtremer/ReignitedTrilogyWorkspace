#ifndef UE4SS_SDK_BP_SK_SH_flower_Tulip_LevelActor_HPP
#define UE4SS_SDK_BP_SK_SH_flower_Tulip_LevelActor_HPP

class ABP_SK_SH_flower_Tulip_LevelActor_C : public ABP_LevelActor_Base_C
{
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0448 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BumpBig;                       // 0x0450 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BumpSmall;                     // 0x0458 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireShake;                     // 0x0460 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireIdle;                      // 0x0468 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireHit;                       // 0x0470 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleBreeze;                    // 0x0478 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0480 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0488 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x490

#endif
