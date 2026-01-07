#ifndef UE4SS_SDK_BP_LS119_Torch_LowAttenuation_HPP
#define UE4SS_SDK_BP_LS119_Torch_LowAttenuation_HPP

class ABP_LS119_Torch_LowAttenuation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0320 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0328 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent0;                                 // 0x0338 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS119_Torch_LowAttenuation(int32 EntryPoint);
}; // Size: 0x348

#endif
