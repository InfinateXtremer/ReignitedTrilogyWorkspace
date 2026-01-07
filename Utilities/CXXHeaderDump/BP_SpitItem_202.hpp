#ifndef UE4SS_SDK_BP_SpitItem_202_HPP
#define UE4SS_SDK_BP_SpitItem_202_HPP

class ABP_SpitItem_202_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    class AActor* Bounsa;                                                             // 0x0748 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_SpitItem_202(int32 EntryPoint);
}; // Size: 0x750

#endif
