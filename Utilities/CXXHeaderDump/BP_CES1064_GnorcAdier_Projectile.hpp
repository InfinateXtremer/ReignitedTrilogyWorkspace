#ifndef UE4SS_SDK_BP_CES1064_GnorcAdier_Projectile_HPP
#define UE4SS_SDK_BP_CES1064_GnorcAdier_Projectile_HPP

class ABP_CES1064_GnorcAdier_Projectile_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class UParticleSystemComponent* VFXLoop;                                          // 0x0640 (size: 0x8)

    void UserConstructionScript();
    void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void ReceiveOnLifeSpanExpired();
    void ReceiveProjectileFired();
    void ExecuteUbergraph_BP_CES1064_GnorcAdier_Projectile(int32 EntryPoint);
}; // Size: 0x648

#endif
