#ifndef UE4SS_SDK_BP_Cactus_Disc_HPP
#define UE4SS_SDK_BP_Cactus_Disc_HPP

class ABP_Cactus_Disc_C : public ABP_LevelActor_Base_C
{
    class UCapsuleComponent* Capsule1;                                                // 0x0448 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0450 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Bump;                          // 0x0458 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireShake;                     // 0x0460 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireIdle;                      // 0x0468 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireHit;                       // 0x0470 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0478 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0480 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x488

#endif
