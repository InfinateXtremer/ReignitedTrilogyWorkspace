#ifndef UE4SS_SDK_CNS2138_RippleTheSeahorse_Dry_HPP
#define UE4SS_SDK_CNS2138_RippleTheSeahorse_Dry_HPP

class ACNS2138_RippleTheSeahorse_Dry_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    bool Bubbles;                                                                     // 0x0908 (size: 0x1)
    class UParticleSystemComponent* WaterBubblesVFX;                                  // 0x0910 (size: 0x8)
    class AIGC_Selector_C* IGC_Selector;                                              // 0x0918 (size: 0x8)
    class ACNS2138_RippleTheSeahorse_C* Wet_Ripple;                                   // 0x0920 (size: 0x8)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Move_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Move_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CNS2138_RippleTheSeahorse_Dry(int32 EntryPoint);
}; // Size: 0x928

#endif
