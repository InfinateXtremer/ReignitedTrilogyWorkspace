#ifndef UE4SS_SDK_123_Boat_HPP
#define UE4SS_SDK_123_Boat_HPP

class A123_Boat_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* Exhaust 2 - short;                                // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Alert;                                          // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Active;                                         // 0x04A0 (size: 0x8)
    class UParticleSystemComponent* Exhaust 3;                                        // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* Exhaust 1;                                        // 0x04B0 (size: 0x8)
    class USkeletalMeshComponent* Boat;                                               // 0x04B8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04C0 (size: 0x8)
    class USkeletalMeshComponent* driver;                                             // 0x04C8 (size: 0x8)
    class AActor* SplineMoverActor;                                                   // 0x04D0 (size: 0x8)
    class UAkAudioEvent* SFX_Explode;                                                 // 0x04D8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconLevelActorStateMachine_K2Node_ComponentBoundEvent_4_OnStateChangeSignature__DelegateSignature(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Active_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_123_Boat(int32 EntryPoint);
}; // Size: 0x4E0

#endif
