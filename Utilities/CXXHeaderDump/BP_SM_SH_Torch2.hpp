#ifndef UE4SS_SDK_BP_SM_SH_Torch2_HPP
#define UE4SS_SDK_BP_SM_SH_Torch2_HPP

class ABP_SM_SH_Torch2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_SH_torch02;                                        // 0x0338 (size: 0x8)
    bool isLit;                                                                       // 0x0340 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SM_SH_Torch2(int32 EntryPoint);
}; // Size: 0x341

#endif
