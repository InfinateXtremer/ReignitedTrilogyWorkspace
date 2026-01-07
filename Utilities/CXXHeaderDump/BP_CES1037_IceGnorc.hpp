#ifndef UE4SS_SDK_BP_CES1037_IceGnorc_HPP
#define UE4SS_SDK_BP_CES1037_IceGnorc_HPP

class ABP_CES1037_IceGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* WillAttack;                                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* SmashDruid_Fail;                                // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* SmashDruid;                                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* Hide;                                           // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_Out;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_Loop;                                 // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* SM_CES1037_IceGnorc_Weapon;                           // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnToOrigin;                                 // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* CausedDamage;                                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* Spawn;                                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* PostAttack;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* Ranged;                                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* Attack;                                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_In;                                   // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A70 (size: 0x8)
    float Scale_NewTrack_0_98E7F6974A05D0444FED7A8AA7F1B1E6;                          // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Scale__Direction_98E7F6974A05D0444FED7A8AA7F1B1E6; // 0x0A7C (size: 0x1)
    class UTimelineComponent* Scale;                                                  // 0x0A80 (size: 0x8)
    bool VisibleOnStart?;                                                             // 0x0A88 (size: 0x1)
    class ABP_CES1032_ArmoredDruid_C* ArmoredDruidReference;                          // 0x0A90 (size: 0x8)
    float RememberedRotationRateZ;                                                    // 0x0A98 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Scale__FinishedFunc();
    void Scale__UpdateFunc();
    void BndEvt__Hide_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Hide_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Spawn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__SmashDruid_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SmashDruid_Fail_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__Death_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1037_IceGnorc(int32 EntryPoint);
}; // Size: 0xA9C

#endif
