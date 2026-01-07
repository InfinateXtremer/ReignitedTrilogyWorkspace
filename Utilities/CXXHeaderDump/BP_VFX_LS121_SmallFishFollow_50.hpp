#ifndef UE4SS_SDK_BP_VFX_LS121_SmallFishFollow_50_HPP
#define UE4SS_SDK_BP_VFX_LS121_SmallFishFollow_50_HPP

class ABP_VFX_LS121_SmallFishFollow_50_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_LS121_SmallFishFollow;                         // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float SplineMover_FishPosition_4AC36C0E464FFF55AB3836BD363A25E2;                  // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineMover__Direction_4AC36C0E464FFF55AB3836BD363A25E2; // 0x033C (size: 0x1)
    class UTimelineComponent* SplineMover;                                            // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void SplineMover__FinishedFunc();
    void SplineMover__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VFX_LS121_SmallFishFollow_50(int32 EntryPoint);
}; // Size: 0x348

#endif
