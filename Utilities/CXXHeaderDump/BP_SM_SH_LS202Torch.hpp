#ifndef UE4SS_SDK_BP_SM_SH_LS202Torch_HPP
#define UE4SS_SDK_BP_SM_SH_LS202Torch_HPP

class ABP_SM_SH_LS202Torch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS106_LightFogGlow;                            // 0x0320 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0328 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0330 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0338 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_SH_Torch_B;                                        // 0x0348 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0350 (size: 0x8)
    bool customLighting;                                                              // 0x0358 (size: 0x1)
    float fireScale;                                                                  // 0x035C (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SM_SH_LS202Torch(int32 EntryPoint);
}; // Size: 0x360

#endif
