#ifndef UE4SS_SDK_FlattenedChicken_HPP
#define UE4SS_SDK_FlattenedChicken_HPP

class AFlattenedChicken_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Timeline_0_Flatten_06F746B8460AE4178D5A4EB45E2D65BD;                        // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_06F746B8460AE4178D5A4EB45E2D65BD; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_FlattenedChicken(int32 EntryPoint);
}; // Size: 0x340

#endif
