#ifndef UE4SS_SDK_128_Door_Super_HPP
#define UE4SS_SDK_128_Door_Super_HPP

class A128_Door_Super_C : public A128_Door_Wooden_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    float Timeline_1_blue_15D8F8044C15C876A2D417BB644FD0C1;                           // 0x04E0 (size: 0x4)
    float Timeline_1_NewTrack_0_15D8F8044C15C876A2D417BB644FD0C1;                     // 0x04E4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_15D8F8044C15C876A2D417BB644FD0C1; // 0x04E8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04F0 (size: 0x8)
    class AActor* NewVar_0_0;                                                         // 0x04F8 (size: 0x8)
    bool broken open;                                                                 // 0x0500 (size: 0x1)
    bool breakOnFlame?;                                                               // 0x0501 (size: 0x1)
    bool breakOnCharge?;                                                              // 0x0502 (size: 0x1)
    FGameplayTagContainer DamageTag_Charge;                                           // 0x0508 (size: 0x20)
    class UAkAudioEvent* BreakSound;                                                  // 0x0528 (size: 0x8)
    class UMaterialInstanceDynamic* MeshRedOnFlame;                                   // 0x0530 (size: 0x8)
    bool redOnFlame?;                                                                 // 0x0538 (size: 0x1)
    FGameplayTagContainer DamageTag_Fire;                                             // 0x0540 (size: 0x20)
    bool brokeByCharge?;                                                              // 0x0560 (size: 0x1)
    FLinearColor TintVectorScratch;                                                   // 0x0564 (size: 0x10)
    bool breakOnHeadbash?;                                                            // 0x0574 (size: 0x1)
    FGameplayTagContainer DamageTag_Headbash;                                         // 0x0578 (size: 0x20)
    FGameplayTagContainer DamageTag_SuperFireSuperCharge;                             // 0x0598 (size: 0x20)
    class UDestructibleComponent* Destructible_0;                                     // 0x05B8 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x05C0 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ReceiveBeginPlay();
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_128_Door_Super(int32 EntryPoint);
}; // Size: 0x5C8

#endif
