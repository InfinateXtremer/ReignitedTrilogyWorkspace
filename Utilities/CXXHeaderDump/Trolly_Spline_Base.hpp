#ifndef UE4SS_SDK_Trolly_Spline_Base_HPP
#define UE4SS_SDK_Trolly_Spline_Base_HPP

class ATrolly_Spline_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Speed Multiplier;                                                           // 0x0330 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Trolly_Spline_Base(int32 EntryPoint);
}; // Size: 0x334

#endif
