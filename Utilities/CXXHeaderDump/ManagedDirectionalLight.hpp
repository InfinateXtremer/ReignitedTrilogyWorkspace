#ifndef UE4SS_SDK_ManagedDirectionalLight_HPP
#define UE4SS_SDK_ManagedDirectionalLight_HPP

class AManagedDirectionalLight_C : public ADirectionalLight
{
    class UDirectionalLightScaleIntensityComponent* DirectionalLightScaleIntensity;   // 0x0328 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x330

#endif
