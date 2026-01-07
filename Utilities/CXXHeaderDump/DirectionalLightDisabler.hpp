#ifndef UE4SS_SDK_DirectionalLightDisabler_HPP
#define UE4SS_SDK_DirectionalLightDisabler_HPP

class ADirectionalLightDisabler_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class AManagedDirectionalLight_C*> LightsToKeep;                           // 0x0328 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StartDisabling();
    void EndDisabling();
    void ExecuteUbergraph_DirectionalLightDisabler(int32 EntryPoint);
}; // Size: 0x338

#endif
