#ifndef UE4SS_SDK_BP_SpitItemPlacement_Base_HPP
#define UE4SS_SDK_BP_SpitItemPlacement_Base_HPP

class ABP_SpitItemPlacement_Base_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UPhasmidCullComponent* PhasmidCull;                                         // 0x03D0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* DebugSphere;                                          // 0x03E0 (size: 0x8)
    class USphereComponent* CollisionSphere;                                          // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* SpitObjectStaticMesh;                                 // 0x03F0 (size: 0x8)
    class UStaticMesh* SpitItemMeshOverride;                                          // 0x03F8 (size: 0x8)
    class APawn* PlayerPawn;                                                          // 0x0400 (size: 0x8)
    bool IsInRange;                                                                   // 0x0408 (size: 0x1)
    FPhasmidProjectileStruct SpitItemProjectileData;                                  // 0x0410 (size: 0x2F0)
    float DeltaSeconds;                                                               // 0x0700 (size: 0x4)
    bool IsActive;                                                                    // 0x0704 (size: 0x1)
    FVector MeshRelativeLocation;                                                     // 0x0708 (size: 0xC)
    bool IsGobbling;                                                                  // 0x0714 (size: 0x1)
    FVector MeshRelativeScale;                                                        // 0x0718 (size: 0xC)
    bool AdjustTargetToReticle;                                                       // 0x0724 (size: 0x1)
    float AdjustTargetTraceDistance;                                                  // 0x0728 (size: 0x4)
    float SpitItemProjectileTargetDistance;                                           // 0x072C (size: 0x4)
    float SpitItemProjectileTargetFOV;                                                // 0x0730 (size: 0x4)
    float SpitItemProjectileTargetHeightDifference;                                   // 0x0734 (size: 0x4)
    bool StandOnMovingPlatforms;                                                      // 0x0738 (size: 0x1)
    bool ArePhysicsEnabled;                                                           // 0x0739 (size: 0x1)

    void GetTargetData(bool& AdjustTargetToReticle, float& AdjustTargetTraceDistance);
    void MoveToSpyroMouth();
    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ConsumeItem();
    void ReactivateItem();
    void BindToSpitItemProjectile(class APhasmidProjectileActor* SpitItemProjectile);
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void OnProjectileFinished(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void SetIsItemActive(bool IsItemActive);
    void ReceiveBeginPlay();
    void SetUpMovingPlatformAwareness();
    void CheckShouldRefreshPhysics(class AActor* OtherActor);
    void RefreshPhysicsSettings(bool PhysicsEnabled);
    void ExecuteUbergraph_BP_SpitItemPlacement_Base(int32 EntryPoint);
}; // Size: 0x73A

#endif
