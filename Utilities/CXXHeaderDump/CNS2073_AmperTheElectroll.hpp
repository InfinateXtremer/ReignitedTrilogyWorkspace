#ifndef UE4SS_SDK_CNS2073_AmperTheElectroll_HPP
#define UE4SS_SDK_CNS2073_AmperTheElectroll_HPP

class ACNS2073_AmperTheElectroll_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Antennae;                        // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_HopWest;                                  // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_HopEast;                                  // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToWest;                               // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToEast;                               // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToQuest;                              // 0x0930 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Electroll_Glasses;                         // 0x0938 (size: 0x8)
    class ABP_CES2024_GearGrinderThief_C* GGT_E;                                      // 0x0940 (size: 0x8)
    class ABP_CES2024_GearGrinderThief_C* GGT_W;                                      // 0x0948 (size: 0x8)
    bool playerHere?;                                                                 // 0x0950 (size: 0x1)
    class AIGC_Selector_C* Selector;                                                  // 0x0958 (size: 0x8)
    bool OrbIconDone;                                                                 // 0x0960 (size: 0x1)
    class AActor* TeleportPoint;                                                      // 0x0968 (size: 0x8)
    bool TeleportActive;                                                              // 0x0970 (size: 0x1)

    void UserConstructionScript();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_HopEast_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_HopWest_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void 205 - Amper Trigger();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_CNS2073_AmperTheElectroll(int32 EntryPoint);
}; // Size: 0x971

#endif
