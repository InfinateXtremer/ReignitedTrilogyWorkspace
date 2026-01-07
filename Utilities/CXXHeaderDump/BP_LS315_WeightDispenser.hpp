#ifndef UE4SS_SDK_BP_LS315_WeightDispenser_HPP
#define UE4SS_SDK_BP_LS315_WeightDispenser_HPP

class ABP_LS315_WeightDispenser_C : public ASP3_Dispenser
{
    class UStaticMeshComponent* DebugMesh;                                            // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x360

#endif
