#ifndef UE4SS_SDK_BP_SpeedwayStar_Blue_HPP
#define UE4SS_SDK_BP_SpeedwayStar_Blue_HPP

class ABP_SpeedwayStar_Blue_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Speedway_StarSparkles_Blue;                // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0330 (size: 0x8)
    class UAbilitySystemComponent* AbilitySystem;                                     // 0x0338 (size: 0x8)
    class USphereComponent* Sphere Collider;                                          // 0x0340 (size: 0x8)
    class UBoxComponent* Box Collider;                                                // 0x0348 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    bool Player_In_Sphere;                                                            // 0x0360 (size: 0x1)
    float SpyroFlyspeed;                                                              // 0x0364 (size: 0x4)
    float SpyroSpeedBoost;                                                            // 0x0368 (size: 0x4)
    int32 Touched;                                                                    // 0x036C (size: 0x4)
    float AutoTurboLifetime;                                                          // 0x0370 (size: 0x4)
    float DamageDuration;                                                             // 0x0374 (size: 0x4)

    void ResetTouched();
    void SpeedBoost();
    void UserConstructionScript();
    void BndEvt__Sphere Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere Collider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box Collider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SpeedwayStar_Blue(int32 EntryPoint);
}; // Size: 0x378

#endif
