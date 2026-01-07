#ifndef UE4SS_SDK_BP_SpitItem_204_HPP
#define UE4SS_SDK_BP_SpitItem_204_HPP

class ABP_SpitItem_204_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)

    void UserConstructionScript();
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ExecuteUbergraph_BP_SpitItem_204(int32 EntryPoint);
}; // Size: 0x748

#endif
