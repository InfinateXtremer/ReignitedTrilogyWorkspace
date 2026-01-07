#ifndef UE4SS_SDK_BP_SpitItem_310_HPP
#define UE4SS_SDK_BP_SpitItem_310_HPP

class ABP_SpitItem_310_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class ABP_CNS3706_Hunter_C* Hunter;                                               // 0x0748 (size: 0x8)
    class AQuestLevelActor* Qla;                                                      // 0x0750 (size: 0x8)

    void UserConstructionScript();
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ActivateRock(FTransform ToGroundTransform);
    void ExecuteUbergraph_BP_SpitItem_310(int32 EntryPoint);
}; // Size: 0x758

#endif
