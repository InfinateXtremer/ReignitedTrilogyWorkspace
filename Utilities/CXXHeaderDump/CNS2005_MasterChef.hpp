#ifndef UE4SS_SDK_CNS2005_MasterChef_HPP
#define UE4SS_SDK_CNS2005_MasterChef_HPP

class ACNS2005_MasterChef_C : public ABP_Base_Friendly_C
{
    class UStaticMeshComponent* stick;                                                // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chime;                                    // 0x0908 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x910

#endif
