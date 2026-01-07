#ifndef UE4SS_SDK_209_Ring_Hunter_HPP
#define UE4SS_SDK_209_Ring_Hunter_HPP

class A209_Ring_Hunter_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Fail;                                // 0x0488 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Success;                             // 0x0490 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Shrink;                              // 0x0498 (size: 0x8)
    class UBoxComponent* Box_Trigger;                                                 // 0x04A0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04A8 (size: 0x8)
    FVector Scale;                                                                    // 0x04B0 (size: 0xC)
    float yVal;                                                                       // 0x04BC (size: 0x4)
    bool Player_In_Capsule;                                                           // 0x04C0 (size: 0x1)
    bool Hunter_In_Capsule;                                                           // 0x04C1 (size: 0x1)
    class AActor* Hunter;                                                             // 0x04C8 (size: 0x8)
    class UParticleSystem* RingParticle;                                              // 0x04D0 (size: 0x8)
    class UParticleSystemComponent* LocalParticle;                                    // 0x04D8 (size: 0x8)
    bool Active;                                                                      // 0x04E0 (size: 0x1)
    bool Shrinking;                                                                   // 0x04E1 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_Shrink_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__State_Success_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_29_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void SuccessTrigger();
    void DestroyParticle();
    void StopShrink();
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_209_Ring_Hunter(int32 EntryPoint);
}; // Size: 0x4E2

#endif
