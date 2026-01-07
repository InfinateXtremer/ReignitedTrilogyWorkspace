#ifndef UE4SS_SDK_BP_VFX_SmallFishFollow_20_Blue_HPP
#define UE4SS_SDK_BP_VFX_SmallFishFollow_20_Blue_HPP

class ABP_VFX_SmallFishFollow_20_Blue_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_SmallFishFollow;                               // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float SplineMover_FishPosition_81D002EC4DF153C5CBF7E1AD192465EF;                  // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineMover__Direction_81D002EC4DF153C5CBF7E1AD192465EF; // 0x033C (size: 0x1)
    class UTimelineComponent* SplineMover;                                            // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void SplineMover__FinishedFunc();
    void SplineMover__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VFX_SmallFishFollow_20_Blue(int32 EntryPoint);
}; // Size: 0x348

#endif
