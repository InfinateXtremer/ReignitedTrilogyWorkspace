#ifndef UE4SS_SDK_CNS2152_SpikeTheElectroll_HPP
#define UE4SS_SDK_CNS2152_SpikeTheElectroll_HPP

class ACNS2152_SpikeTheElectroll_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Antennae;                        // 0x0908 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Glasses;                         // 0x0910 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CNS2152_SpikeTheElectroll(int32 EntryPoint);
}; // Size: 0x918

#endif
