#ifndef UE4SS_SDK_BP_VFX_LS121_SmallFishFollow_HPP
#define UE4SS_SDK_BP_VFX_LS121_SmallFishFollow_HPP

class ABP_VFX_LS121_SmallFishFollow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPhasmidCullComponent* PhasmidCull;                                         // 0x0320 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_LS121_SmallFishFollow;                         // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float SplineMover_FishPosition_5D96758C4587AC2309C130BEB73B4651;                  // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineMover__Direction_5D96758C4587AC2309C130BEB73B4651; // 0x0344 (size: 0x1)
    class UTimelineComponent* SplineMover;                                            // 0x0348 (size: 0x8)

    void UserConstructionScript();
    void SplineMover__FinishedFunc();
    void SplineMover__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_VFX_LS121_SmallFishFollow(int32 EntryPoint);
}; // Size: 0x350

#endif
