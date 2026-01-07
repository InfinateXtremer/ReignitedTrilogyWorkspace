#ifndef UE4SS_SDK_BP_LS213_GrowingStalk_HPP
#define UE4SS_SDK_BP_LS213_GrowingStalk_HPP

class ABP_LS213_GrowingStalk_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UStaticMeshComponent* KnockbackCylinder;                                    // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0458 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0460 (size: 0x8)
    class UParticleSystemComponent* VFX_Bean_Stalk_Grow_Down;                         // 0x0468 (size: 0x8)
    class UParticleSystemComponent* VFX_Bean_Stalk_Grow;                              // 0x0470 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0478 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Grown;                                          // 0x0488 (size: 0x8)
    class USceneComponent* SeedSpawn;                                                 // 0x0490 (size: 0x8)
    class UStaticMeshComponent* PlantPlatform;                                        // 0x0498 (size: 0x8)
    float GrowDown_Grow_Scale_35FF29994EF6BFC69448D192E337F88B;                       // 0x04A0 (size: 0x4)
    float GrowDown_Grow_Spin_35FF29994EF6BFC69448D192E337F88B;                        // 0x04A4 (size: 0x4)
    float GrowDown_Grow_Height_35FF29994EF6BFC69448D192E337F88B;                      // 0x04A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowDown__Direction_35FF29994EF6BFC69448D192E337F88B; // 0x04AC (size: 0x1)
    class UTimelineComponent* GrowDown;                                               // 0x04B0 (size: 0x8)
    float GrowUp_GrowScale_C4CF82294B6FD169458ACDB0AD0A251C;                          // 0x04B8 (size: 0x4)
    float GrowUp_GrowSpin_C4CF82294B6FD169458ACDB0AD0A251C;                           // 0x04BC (size: 0x4)
    float GrowUp_GrowUp_C4CF82294B6FD169458ACDB0AD0A251C;                             // 0x04C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowUp__Direction_C4CF82294B6FD169458ACDB0AD0A251C; // 0x04C4 (size: 0x1)
    class UTimelineComponent* GrowUp;                                                 // 0x04C8 (size: 0x8)
    FGameplayTagContainer SpitDamageTag;                                              // 0x04D0 (size: 0x20)
    FGameplayTagContainer FireDamageTag;                                              // 0x04F0 (size: 0x20)
    bool isPlantActive?;                                                              // 0x0510 (size: 0x1)
    bool isGrowActive?;                                                               // 0x0511 (size: 0x1)
    bool startDown?;                                                                  // 0x0512 (size: 0x1)
    float rotateRate;                                                                 // 0x0514 (size: 0x4)
    float ScaleXY;                                                                    // 0x0518 (size: 0x4)
    float ScaleZ;                                                                     // 0x051C (size: 0x4)
    bool resetCalled?;                                                                // 0x0520 (size: 0x1)
    bool StandingOnHole?;                                                             // 0x0521 (size: 0x1)

    void UserConstructionScript();
    void GrowUp__FinishedFunc();
    void GrowUp__UpdateFunc();
    void GrowUp__ShakeEvents__EventFunc();
    void GrowDown__FinishedFunc();
    void GrowDown__UpdateFunc();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Grown_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void 213 - Reset Stalk();
    void BndEvt__KnockbackCylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__KnockbackCylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_LS213_GrowingStalk(int32 EntryPoint);
}; // Size: 0x522

#endif
