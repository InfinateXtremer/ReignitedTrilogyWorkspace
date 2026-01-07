#ifndef UE4SS_SDK_HudText3D_HPP
#define UE4SS_SDK_HudText3D_HPP

class AHudText3D_C : public AActor
{
    class USplineComponent* text spline;                                              // 0x0318 (size: 0x8)
    class UPortalNameComponent_C* 3D Text Component;                                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x330

#endif
