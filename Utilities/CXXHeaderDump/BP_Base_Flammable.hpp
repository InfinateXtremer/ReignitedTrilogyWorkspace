#ifndef UE4SS_SDK_BP_Base_Flammable_HPP
#define UE4SS_SDK_BP_Base_Flammable_HPP

class ABP_Base_Flammable_C : public ABP_LevelActor_Base_C
{
    class UFalconLevelActorStateComponent* State_Recovery;                            // 0x0448 (size: 0x8)
    class UFalconLevelActorStateComponent* State_FireOut;                             // 0x0450 (size: 0x8)
    class UFalconLevelActorStateComponent* State_OnFire;                              // 0x0458 (size: 0x8)
    class UFalconLevelActorStateComponent* State_FireImpact;                          // 0x0460 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Idle;                                // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0470 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x478

#endif
