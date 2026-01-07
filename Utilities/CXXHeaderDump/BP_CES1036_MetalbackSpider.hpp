#ifndef UE4SS_SDK_BP_CES1036_MetalbackSpider_HPP
#define UE4SS_SDK_BP_CES1036_MetalbackSpider_HPP

class ABP_CES1036_MetalbackSpider_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class USphereComponent* Melee_Only;                                               // 0x09F8 (size: 0x8)
    class UCapsuleComponent* Capsule_RightLegs;                                       // 0x0A00 (size: 0x8)
    class UCapsuleComponent* Capsule_LeftLegs;                                        // 0x0A08 (size: 0x8)
    class UCapsuleComponent* CapsuleCollision_Butt;                                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitReverseB;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolReverseB;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitB;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolB;                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BackToPatrol;                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitReverseA;                  // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolReverseA;                // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitA;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolA;                       // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A80 (size: 0x8)
    FString StateToReturnTo;                                                          // 0x0A88 (size: 0x10)
    class ATriggerBox* TriggerBox_SafeZone1;                                          // 0x0A98 (size: 0x8)
    class ATriggerBox* TriggerBox_SafeZone2;                                          // 0x0AA0 (size: 0x8)
    class ATriggerBox* TriggerBox_SafeZone3;                                          // 0x0AA8 (size: 0x8)
    bool isSpyroInSafeSpot?;                                                          // 0x0AB0 (size: 0x1)
    class ATriggerSphere* TriggerSphere_SafeZone1;                                    // 0x0AB8 (size: 0x8)
    class ATriggerSphere* TriggerSphere_SafeZone2;                                    // 0x0AC0 (size: 0x8)
    class ABP_LS115_AchievementTracker_C* AchievementTrackerRef;                      // 0x0AC8 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_WaitA_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PatrolA_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PatrolReverseA_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitReverseA_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_BackToPatrol_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PatrolB_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitB_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PatrolReverseB_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaitReverseB_K2Node_ComponentBoundEvent_9_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_10_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_11_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__TriggerBox_SafeZone1_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_SafeZone2_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_SafeZone3_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerSphere_SafeZone1_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerSphere_SafeZone2_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_SafeZone1_K2Node_ComponentBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_SafeZone2_K2Node_ComponentBoundEvent_6_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_SafeZone3_K2Node_ComponentBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerSphere_SafeZone1_K2Node_ComponentBoundEvent_8_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerSphere_SafeZone2_K2Node_ComponentBoundEvent_9_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__FalconEnemyState_Recovery_K2Node_ComponentBoundEvent_11_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1036_MetalbackSpider(int32 EntryPoint);
}; // Size: 0xAD0

#endif
