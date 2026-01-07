#ifndef UE4SS_SDK_BP_115_Energized_ContractingTunnel_HPP
#define UE4SS_SDK_BP_115_Energized_ContractingTunnel_HPP

class ABP_115_Energized_ContractingTunnel_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS115_Contracting_Door_Sparks_Out;         // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS115_Contracting_Door_Sparks_In;          // 0x03E0 (size: 0x8)
    class USplineComponent* SplineE;                                                  // 0x03E8 (size: 0x8)
    class USplineComponent* SplineD;                                                  // 0x03F0 (size: 0x8)
    class USplineComponent* SplineC;                                                  // 0x03F8 (size: 0x8)
    class USplineComponent* SplineB;                                                  // 0x0400 (size: 0x8)
    class USplineComponent* SplineA;                                                  // 0x0408 (size: 0x8)
    class UStaticMeshComponent* PartE;                                                // 0x0410 (size: 0x8)
    class UStaticMeshComponent* PartD;                                                // 0x0418 (size: 0x8)
    class UStaticMeshComponent* PartA;                                                // 0x0420 (size: 0x8)
    class UStaticMeshComponent* PartC;                                                // 0x0428 (size: 0x8)
    class UStaticMeshComponent* PartB;                                                // 0x0430 (size: 0x8)
    class UStaticMeshComponent* complete;                                             // 0x0438 (size: 0x8)
    float Percent_Percent_52E2DAB94A190B9DB71BE8B5A8F01D80;                           // 0x0440 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Percent__Direction_52E2DAB94A190B9DB71BE8B5A8F01D80; // 0x0444 (size: 0x1)
    class UTimelineComponent* Percent;                                                // 0x0448 (size: 0x8)
    bool IsOpen;                                                                      // 0x0450 (size: 0x1)
    TArray<class UStaticMeshComponent*> AllParts;                                     // 0x0458 (size: 0x10)
    TArray<class USplineComponent*> AllSplines;                                       // 0x0468 (size: 0x10)
    int32 Counter;                                                                    // 0x0478 (size: 0x4)

    void UserConstructionScript();
    void Percent__FinishedFunc();
    void Percent__UpdateFunc();
    void ReceiveBeginPlay();
    void Energize();
    void De-energize();
    void CustomEvent_0();
    void Contracting Tunnel - Set Visible?(bool isVisible?);
    void ExecuteUbergraph_BP_115_Energized_ContractingTunnel(int32 EntryPoint);
}; // Size: 0x47C

#endif
