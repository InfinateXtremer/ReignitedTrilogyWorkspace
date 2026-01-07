#ifndef UE4SS_SDK_BP_TreasureChest_Projectile_HPP
#define UE4SS_SDK_BP_TreasureChest_Projectile_HPP

class ABP_TreasureChest_Projectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0320 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0328 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0338 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0340 (size: 0x8)
    class AActor* HitTarget;                                                          // 0x0348 (size: 0x8)
    bool damagedAlready?;                                                             // 0x0350 (size: 0x1)
    class UDestructibleMesh* NewVar_0;                                                // 0x0358 (size: 0x8)
    bool initialDelayComplete?;                                                       // 0x0360 (size: 0x1)
    FGameplayTagContainer DamageApplied;                                              // 0x0368 (size: 0x20)

    void UserConstructionScript();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureChest_Projectile(int32 EntryPoint);
}; // Size: 0x388

#endif
