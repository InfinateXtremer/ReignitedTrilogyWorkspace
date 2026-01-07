#ifndef UE4SS_SDK_BP_201_Button_HPP
#define UE4SS_SDK_BP_201_Button_HPP

class ABP_201_Button_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0450 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Idle_Red_Light;                     // 0x0458 (size: 0x8)
    class UStaticMeshComponent* ButtonBase;                                           // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x0468 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Button_Pushed_Green_Light_Dust;            // 0x0470 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0480 (size: 0x8)
    float Timeline_0_0_Glow_590C7781422A1B5CA7E21CA81BD79BF5;                         // 0x0488 (size: 0x4)
    float Timeline_0_0_PRess_590C7781422A1B5CA7E21CA81BD79BF5;                        // 0x048C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_590C7781422A1B5CA7E21CA81BD79BF5; // 0x0490 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0498 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonMaterial;                                   // 0x04A0 (size: 0x8)
    class UMaterialInstanceDynamic* ButtonBaseMaterial;                               // 0x04A8 (size: 0x8)
    TArray<class ABP_201_Door_C*> MyThingsToTrigger;                                  // 0x04B0 (size: 0x10)
    bool UseCamera;                                                                   // 0x04C0 (size: 0x1)
    class UAkAudioEvent* SFX Button Push;                                             // 0x04C8 (size: 0x8)
    bool hitActive;                                                                   // 0x04D0 (size: 0x1)
    bool cancelButtonAction?;                                                         // 0x04D1 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void IGCStart_EnemyInform();
    void IGCEnd_EnemyInform();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_201_Button(int32 EntryPoint);
}; // Size: 0x4D2

#endif
