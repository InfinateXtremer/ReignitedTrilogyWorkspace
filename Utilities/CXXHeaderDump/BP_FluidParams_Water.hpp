#ifndef UE4SS_SDK_BP_FluidParams_Water_HPP
#define UE4SS_SDK_BP_FluidParams_Water_HPP

class UBP_FluidParams_Water_C : public UObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    float Dampening;                                                                  // 0x0030 (size: 0x4)
    float TravelSpeed;                                                                // 0x0034 (size: 0x4)
    float UpdateRate;                                                                 // 0x0038 (size: 0x4)
    float SplatSize;                                                                  // 0x003C (size: 0x4)
    float SplatStrength;                                                              // 0x0040 (size: 0x4)
    float SplatExponent;                                                              // 0x0044 (size: 0x4)

    void ExecuteUbergraph_BP_FluidParams_Water(int32 EntryPoint);
}; // Size: 0x48

#endif
