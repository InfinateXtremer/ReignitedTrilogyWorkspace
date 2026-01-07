#ifndef UE4SS_SDK_BP_205_WindmillLarge_HPP
#define UE4SS_SDK_BP_205_WindmillLarge_HPP

class ABP_205_WindmillLarge_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0490 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0498 (size: 0x8)
    class UStaticMeshComponent* SM_LS205_MiniWindmill_Fan;                            // 0x04A0 (size: 0x8)
    class AActor* SpiritActor;                                                        // 0x04A8 (size: 0x8)
    class ABP_205_Button_C* AssosicatedButton;                                        // 0x04B0 (size: 0x8)
    FGameplayTagContainer NewVar_0;                                                   // 0x04B8 (size: 0x20)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ExecuteUbergraph_BP_205_WindmillLarge(int32 EntryPoint);
}; // Size: 0x4D8

#endif
