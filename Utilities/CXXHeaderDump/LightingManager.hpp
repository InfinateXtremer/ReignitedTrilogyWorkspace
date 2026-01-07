#ifndef UE4SS_SDK_LightingManager_HPP
#define UE4SS_SDK_LightingManager_HPP

class ALightingManager_C : public AMasterLightingManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    TArray<class AActor*> ManagedLights;                                              // 0x03C0 (size: 0x10)
    float InitialFadeIntensity;                                                       // 0x03D0 (size: 0x4)
    float FinalFadeIntensity;                                                         // 0x03D4 (size: 0x4)
    float fadeTime;                                                                   // 0x03D8 (size: 0x4)
    float currentFadeValue;                                                           // 0x03DC (size: 0x4)
    class AGlobalTransporter_C* GlobalTransporter;                                    // 0x03E0 (size: 0x8)
    class APhasmidLightingManager* OutgoingLightingManager;                           // 0x03E8 (size: 0x8)
    class APhasmidLightingManager* IncomingLightingManager;                           // 0x03F0 (size: 0x8)
    class APostProcessVolume* PostProcessVolume;                                      // 0x03F8 (size: 0x8)
    class AAtmosphericFog* Fog;                                                       // 0x0400 (size: 0x8)
    float BasePostProcessBlendWeight;                                                 // 0x0408 (size: 0x4)
    float BaseFogBrightness;                                                          // 0x040C (size: 0x4)
    class AExponentialHeightFog* ExponentialHeightFog;                                // 0x0410 (size: 0x8)
    float BaseHeightFogDensity;                                                       // 0x0418 (size: 0x4)

    void UserConstructionScript();
    void TransitionLightingManagers(float fadeTime, class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager);
    void SetNewLightingManager(class APhasmidLightingManager* OutgoingLightingManager, class APhasmidLightingManager* IncomingLightingManager, bool Delay);
    void ExecuteUbergraph_LightingManager(int32 EntryPoint);
}; // Size: 0x41C

#endif
