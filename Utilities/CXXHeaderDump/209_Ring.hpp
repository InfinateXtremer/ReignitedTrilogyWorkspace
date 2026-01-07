#ifndef UE4SS_SDK_209_Ring_HPP
#define UE4SS_SDK_209_Ring_HPP

class A209_Ring_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0488 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0490 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Suspended;                                      // 0x04A0 (size: 0x8)
    class UBoxComponent* Box_Trigger;                                                 // 0x04A8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04B0 (size: 0x8)
    FVector NewVar_0;                                                                 // 0x04B8 (size: 0xC)
    float yVal;                                                                       // 0x04C4 (size: 0x4)
    bool Player_In_Capsule;                                                           // 0x04C8 (size: 0x1)
    class UParticleSystem* RingParticle;                                              // 0x04D0 (size: 0x8)
    class UParticleSystemComponent* LocalParticle;                                    // 0x04D8 (size: 0x8)
    class UParticleSystem* ExplodeParticle;                                           // 0x04E0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FalconLevelActorStateMachine_K2Node_ComponentBoundEvent_3_OnStateChangeSignature__DelegateSignature(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void SpawnPRTICLE();
    void BndEvt__State_Suspended_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void TurnNumbers();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_209_Ring(int32 EntryPoint);
}; // Size: 0x4E8

#endif
