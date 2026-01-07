#ifndef UE4SS_SDK_BP_Spyro_Squidboard_Dyn_HPP
#define UE4SS_SDK_BP_Spyro_Squidboard_Dyn_HPP

class ABP_Spyro_Squidboard_Dyn_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_Spyro_Skateboard_Squid_Splash;                 // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    float DecalFade_Dissolver_7E3169FF4342E29ADF191FB082B5867A;                       // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DecalFade__Direction_7E3169FF4342E29ADF191FB082B5867A; // 0x033C (size: 0x1)
    class UTimelineComponent* DecalFade;                                              // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void DecalFade__FinishedFunc();
    void DecalFade__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spyro_Squidboard_Dyn(int32 EntryPoint);
}; // Size: 0x348

#endif
