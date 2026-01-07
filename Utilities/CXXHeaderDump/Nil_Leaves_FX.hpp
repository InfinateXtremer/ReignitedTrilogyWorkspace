#ifndef UE4SS_SDK_Nil_Leaves_FX_HPP
#define UE4SS_SDK_Nil_Leaves_FX_HPP

class ANil_Leaves_FX_C : public ABP_Collectible_Dragon_LeaveFX_C
{
    class UStaticMeshComponent* hammer;                                               // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Spike;                                                // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0380 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x388

#endif
