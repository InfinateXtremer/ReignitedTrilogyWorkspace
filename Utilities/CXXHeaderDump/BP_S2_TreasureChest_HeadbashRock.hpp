#ifndef UE4SS_SDK_BP_S2_TreasureChest_HeadbashRock_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_HeadbashRock_HPP

class ABP_S2_TreasureChest_HeadbashRock_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    bool isLarge?;                                                                    // 0x0628 (size: 0x1)
    class AActor* AchievementWatcher;                                                 // 0x0630 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_S2_TreasureChest_HeadbashRock(int32 EntryPoint);
}; // Size: 0x638

#endif
