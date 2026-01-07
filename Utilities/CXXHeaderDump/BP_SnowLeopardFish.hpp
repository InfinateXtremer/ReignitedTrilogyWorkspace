#ifndef UE4SS_SDK_BP_SnowLeopardFish_HPP
#define UE4SS_SDK_BP_SnowLeopardFish_HPP

class ABP_SnowLeopardFish_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0450 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0458 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State: Landed;                                        // 0x0468 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0470 (size: 0x8)
    class USplineComponent* Hit Spline;                                               // 0x0478 (size: 0x8)
    class USplineComponent* Idle Spline;                                              // 0x0480 (size: 0x8)
    class UStaticMeshComponent* Fish;                                                 // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State: Hit;                                           // 0x0490 (size: 0x8)
    class USphereComponent* Sphere_Fish;                                              // 0x0498 (size: 0x8)
    float shrink_NewTrack_0_8519A096419F00F189E548931C5B49B4;                         // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> shrink__Direction_8519A096419F00F189E548931C5B49B4; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Shrink;                                                 // 0x04A8 (size: 0x8)
    float Timeline_0_0_Distance_on_Spline_6CC400514BA9ABA96E0D61A8FFEE2CD7;           // 0x04B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_6CC400514BA9ABA96E0D61A8FFEE2CD7; // 0x04B4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04B8 (size: 0x8)
    float Timeline_4_Distance_on_Spline_D23805C640A2580FFF9763A710D99A2C;             // 0x04C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_D23805C640A2580FFF9763A710D99A2C; // 0x04C4 (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x04C8 (size: 0x8)
    float Timeline_3_Distance_on_Spline_B4D7A4654F46CFDCC034F1A02E4D0556;             // 0x04D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_B4D7A4654F46CFDCC034F1A02E4D0556; // 0x04D4 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x04D8 (size: 0x8)
    float Timeline_2_Distance_on_Spline_DE2511714D3F19CB1E083EB5A8C5E9C6;             // 0x04E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_DE2511714D3F19CB1E083EB5A8C5E9C6; // 0x04E4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x04E8 (size: 0x8)
    float Timeline_1_Distance_on_Spline_0D5070CF43D614ADECF573B26EB39D30;             // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_0D5070CF43D614ADECF573B26EB39D30; // 0x04F4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04F8 (size: 0x8)
    class ABP_SnowLeopard_C* Leopard;                                                 // 0x0500 (size: 0x8)
    class AActor* Target;                                                             // 0x0508 (size: 0x8)
    float FishNumber;                                                                 // 0x0510 (size: 0x4)
    class APhasmidProjectileActor* ProjectileFish;                                    // 0x0518 (size: 0x8)
    bool animSwitch;                                                                  // 0x0520 (size: 0x1)
    FGameplayTagContainer ValidDamageTags;                                            // 0x0528 (size: 0x20)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void shrink__FinishedFunc();
    void shrink__UpdateFunc();
    void Fish Launch Now();
    void ReceiveBeginPlay();
    void Rotation();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void StopSplines();
    void Start Fish();
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void 213 Fish - Get Eaten();
    void BndEvt__State: Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Landed_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_SnowLeopardFish(int32 EntryPoint);
}; // Size: 0x548

#endif
