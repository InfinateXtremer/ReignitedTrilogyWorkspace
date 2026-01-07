#ifndef UE4SS_SDK_BP_LS109_InertCauldron_HPP
#define UE4SS_SDK_BP_LS109_InertCauldron_HPP

class ABP_LS109_InertCauldron_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03D8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03F0 (size: 0x8)
    FWalkableSlopeOverride NewVar_0;                                                  // 0x03F8 (size: 0x10)

    void UserConstructionScript();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ExecuteUbergraph_BP_LS109_InertCauldron(int32 EntryPoint);
}; // Size: 0x408

#endif
