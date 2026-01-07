#ifndef UE4SS_SDK_CNS2091_CorporalGlug_HPP
#define UE4SS_SDK_CNS2091_CorporalGlug_HPP

class ACNS2091_CorporalGlug_C : public ABP_Base_Friendly_C
{
    class UStaticMeshComponent* staff_real;                                           // 0x0900 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0908 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x910

#endif
