#ifndef UE4SS_SDK_Trolly_Spline_Transition_HPP
#define UE4SS_SDK_Trolly_Spline_Transition_HPP

class ATrolly_Spline_Transition_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Spline RIght;                                                       // 0x0330 (size: 0x8)
    class AActor* Spline Left;                                                        // 0x0338 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x340

#endif
