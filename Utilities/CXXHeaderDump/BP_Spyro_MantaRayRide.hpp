#ifndef UE4SS_SDK_BP_Spyro_MantaRayRide_HPP
#define UE4SS_SDK_BP_Spyro_MantaRayRide_HPP

class ABP_Spyro_MantaRayRide_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USkeletalMeshComponent* SK_FakeSpyro;                                       // 0x03D0 (size: 0x8)
    class USkeletalMeshComponent* SK_MantaRay;                                        // 0x03D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E0 (size: 0x8)
    int32 MantaRayCamSettingsID;                                                      // 0x03E8 (size: 0x4)
    FVector originalLocation;                                                         // 0x03EC (size: 0xC)
    class UParticleSystemComponent* MantaRayTrailEffects;                             // 0x03F8 (size: 0x8)
    int32 CamSettings;                                                                // 0x0400 (size: 0x4)

    void UserConstructionScript();
    void MantaRayRide_Begin();
    void MantaRayRide_End();
    void ExecuteUbergraph_BP_Spyro_MantaRayRide(int32 EntryPoint);
}; // Size: 0x404

#endif
