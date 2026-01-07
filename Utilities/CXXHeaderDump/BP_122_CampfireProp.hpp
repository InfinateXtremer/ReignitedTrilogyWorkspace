#ifndef UE4SS_SDK_BP_122_CampfireProp_HPP
#define UE4SS_SDK_BP_122_CampfireProp_HPP

class ABP_122_CampfireProp_C : public ABP_LevelActor_Base_C
{
    class UCapsuleComponent* Capsule;                                                 // 0x0448 (size: 0x8)
    class UStaticMeshComponent* SM_SH_Campfire;                                       // 0x0450 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x458

#endif
