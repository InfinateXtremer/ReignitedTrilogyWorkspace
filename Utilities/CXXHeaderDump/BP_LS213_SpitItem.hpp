#ifndef UE4SS_SDK_BP_LS213_SpitItem_HPP
#define UE4SS_SDK_BP_LS213_SpitItem_HPP

class ABP_LS213_SpitItem_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0748 (size: 0x8)

    void UserConstructionScript();
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void SetIsItemActive(bool IsItemActive);
    void ExecuteUbergraph_BP_LS213_SpitItem(int32 EntryPoint);
}; // Size: 0x750

#endif
