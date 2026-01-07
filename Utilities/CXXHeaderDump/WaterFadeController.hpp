#ifndef UE4SS_SDK_WaterFadeController_HPP
#define UE4SS_SDK_WaterFadeController_HPP

class AWaterFadeController_C : public AWaterProcessVolumeController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_0_NewTrack_0_919BC6544CCBF2393DA492936E7F84F0;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_919BC6544CCBF2393DA492936E7F84F0; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0358 (size: 0x8)
    FVector2D LastFadeVals;                                                           // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WaterFadeController(int32 EntryPoint);
}; // Size: 0x368

#endif
