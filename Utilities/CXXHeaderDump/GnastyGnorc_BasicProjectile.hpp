#ifndef UE4SS_SDK_GnastyGnorc_BasicProjectile_HPP
#define UE4SS_SDK_GnastyGnorc_BasicProjectile_HPP

class AGnastyGnorc_BasicProjectile_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)

    void UserConstructionScript();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_GnastyGnorc_BasicProjectile(int32 EntryPoint);
}; // Size: 0x640

#endif
