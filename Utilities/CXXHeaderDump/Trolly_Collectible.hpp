#ifndef UE4SS_SDK_Trolly_Collectible_HPP
#define UE4SS_SDK_Trolly_Collectible_HPP

class ATrolly_Collectible_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Collected;                                      // 0x0490 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0498 (size: 0x8)
    class UParticleSystemComponent* AmbientParticle;                                  // 0x04A0 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_Collected_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Trolly_Collectible(int32 EntryPoint);
}; // Size: 0x4A8

#endif
