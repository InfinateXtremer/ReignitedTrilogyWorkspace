#ifndef UE4SS_SDK_BP_DestructibleProjectile_HPP
#define UE4SS_SDK_BP_DestructibleProjectile_HPP

class ABP_DestructibleProjectile_C : public APhasmidDestructibleProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0640 (size: 0x8)
    float ImpulseStrength;                                                            // 0x0648 (size: 0x4)
    class UDestructibleMesh* DestructibleMesh;                                        // 0x0650 (size: 0x8)
    float ImpactStrength;                                                             // 0x0658 (size: 0x4)

    void GetDestructible(class UDestructibleComponent*& AsDestructible Component);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveProjectileFired();
    void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void ReceiveOnLifeSpanExpired();
    void ExecuteUbergraph_BP_DestructibleProjectile(int32 EntryPoint);
}; // Size: 0x65C

#endif
