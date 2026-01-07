#ifndef UE4SS_SDK_LS212_SpitItem_HPP
#define UE4SS_SDK_LS212_SpitItem_HPP

class ALS212_SpitItem_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0748 (size: 0x8)
    class ABP_SpitRock_Manager2_C* My Manager;                                        // 0x0750 (size: 0x8)
    class UParticleSystemComponent* SmolderParticle;                                  // 0x0758 (size: 0x8)

    void UserConstructionScript();
    void ConsumeItem();
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_LS212_SpitItem(int32 EntryPoint);
}; // Size: 0x760

#endif
