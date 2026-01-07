#ifndef UE4SS_SDK_BP_CES1035_GreenDruid_HPP
#define UE4SS_SDK_BP_CES1035_GreenDruid_HPP

class ABP_CES1035_GreenDruid_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* PanicSphereTrigger;                                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_Up;                                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* Idle_Stand;                                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_Down;                                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_Right;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_Left;                                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_Loop;                                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* Casting_PreCasting;                             // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* PreEnergize;                                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* DeEnergize;                                     // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* VolumeTriggered;                                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnToOrigin;                                 // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* RunInCircles;                                   // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* Panic;                                          // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* Laugh;                                          // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* Energize;                                       // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A80 (size: 0x8)
    class AActor* ActorToManipulate;                                                  // 0x0A88 (size: 0x8)
    bool UseLeftRightAnims?;                                                          // 0x0A90 (size: 0x1)
    bool UseUpDownAnims?;                                                             // 0x0A91 (size: 0x1)
    bool isObjectCurrently Right/Down instead of Left/Up?;                            // 0x0A92 (size: 0x1)
    bool isUsingNewDruidAnims;                                                        // 0x0A93 (size: 0x1)
    float Casting_Loop_Duration;                                                      // 0x0A94 (size: 0x4)
    bool CanBePanickedOnPlayerMove;                                                   // 0x0A98 (size: 0x1)
    bool 115_ignoreAnimNotifyENERGIZE?;                                               // 0x0A99 (size: 0x1)
    bool De-EnergizeFromLTD_AlreadyCalled?;                                           // 0x0A9A (size: 0x1)
    bool canBePanicked?;                                                              // 0x0A9B (size: 0x1)

    void isCurrentlyDyingOrDead(bool& isCurrentlyDying);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Laugh_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Activate_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Casting_Loop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void AnimNotify_Energize();
    void BndEvt__PanicSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Laugh_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_DeEnergize_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__PreEnergize_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void NotifyGreenDruid(class AActor* InputActor);
    void ExecuteUbergraph_BP_CES1035_GreenDruid(int32 EntryPoint);
}; // Size: 0xA9C

#endif
