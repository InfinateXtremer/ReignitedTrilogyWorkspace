#ifndef UE4SS_SDK_BP_205_SpitItem_HPP
#define UE4SS_SDK_BP_205_SpitItem_HPP

class ABP_205_SpitItem_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class UParticleSystemComponent* PS_Purple_Orb_Electricity;                        // 0x0748 (size: 0x8)
    class USphereComponent* GG_Trigger;                                               // 0x0750 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0758 (size: 0x8)

    void UserConstructionScript();
    void SetIsItemActive(bool IsItemActive);
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void BndEvt__GG_Trigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_205_SpitItem(int32 EntryPoint);
}; // Size: 0x760

#endif
