#ifndef UE4SS_SDK_HulaGirlStand_HPP
#define UE4SS_SDK_HulaGirlStand_HPP

class AHulaGirlStand_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0450 (size: 0x8)
    class UParticleSystemComponent* PS_Platform_Impact;                               // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_Platform_Land;                                 // 0x0460 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0468 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0470 (size: 0x8)
    class UStaticMeshComponent* Stand;                                                // 0x0478 (size: 0x8)
    FVector StartLocation;                                                            // 0x0480 (size: 0xC)
    FGameplayTagContainer Charge Tag Container;                                       // 0x0490 (size: 0x20)
    class ACNS2110_HulaGirl_C* MyHulaGirl;                                            // 0x04B0 (size: 0x8)
    bool done;                                                                        // 0x04B8 (size: 0x1)
    bool Falling;                                                                     // 0x04B9 (size: 0x1)

    void UserConstructionScript();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ReceiveBeginPlay();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_HulaGirlStand(int32 EntryPoint);
}; // Size: 0x4BA

#endif
