#ifndef UE4SS_SDK_DeathCollisionManager_HPP
#define UE4SS_SDK_DeathCollisionManager_HPP

class UDeathCollisionManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    bool EnableDeathCollisionCheck;                                                   // 0x00F8 (size: 0x1)
    float MaxImpulse;                                                                 // 0x00FC (size: 0x4)
    float ImpactDeceleration;                                                         // 0x0100 (size: 0x4)
    class UCharacterMovementComponent* CharacterMovement;                             // 0x0108 (size: 0x8)
    TArray<FVector> ImpactNormalVectors;                                              // 0x0110 (size: 0x10)
    float MinZAngle;                                                                  // 0x0120 (size: 0x4)
    float CollisionCheckRadius;                                                       // 0x0124 (size: 0x4)
    FVector CollisionCheckOffset;                                                     // 0x0128 (size: 0xC)
    FName CollisionCheckSocket;                                                       // 0x0138 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x0140 (size: 0x8)
    FVector CheckLocation;                                                            // 0x0148 (size: 0xC)
    class UMeshComponent* Mesh;                                                       // 0x0158 (size: 0x8)
    bool DebugDraw;                                                                   // 0x0160 (size: 0x1)
    TArray<FName> CheckCollisionInTheseStates;                                        // 0x0168 (size: 0x10)
    FName FinalDeathState;                                                            // 0x0178 (size: 0x8)
    float MaxFinalDeathStateTime;                                                     // 0x0180 (size: 0x4)
    float InitialMaxAcceleration;                                                     // 0x0184 (size: 0x4)
    float InitialDecelFlying;                                                         // 0x0188 (size: 0x4)
    float InitialDecelFalling;                                                        // 0x018C (size: 0x4)
    bool EnableCheck_Internal;                                                        // 0x0190 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Reset();
    void ExecuteUbergraph_DeathCollisionManager(int32 EntryPoint);
}; // Size: 0x191

#endif
