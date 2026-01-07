#ifndef UE4SS_SDK_130_ClockPlatform_HPP
#define UE4SS_SDK_130_ClockPlatform_HPP

class A130_ClockPlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_Dust_Puff;                                     // 0x0328 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0330 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrier_Flash;                             // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrier;                                   // 0x0348 (size: 0x8)
    class UStaticMeshComponent* PlatformMesh;                                         // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    float Timeline_0_Light_Brightness_A19C81E84F97F2CE93A8BEB6556DC85A;               // 0x0360 (size: 0x4)
    float Timeline_0_Transform_A19C81E84F97F2CE93A8BEB6556DC85A;                      // 0x0364 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A19C81E84F97F2CE93A8BEB6556DC85A; // 0x0368 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0370 (size: 0x8)
    FVector Vector;                                                                   // 0x0378 (size: 0xC)
    FVector StartVector;                                                              // 0x0384 (size: 0xC)
    FVector EndVector;                                                                // 0x0390 (size: 0xC)
    class AActor* ActorRef;                                                           // 0x03A0 (size: 0x8)
    FName stateName;                                                                  // 0x03A8 (size: 0x8)
    bool Active;                                                                      // 0x03B0 (size: 0x1)
    TArray<FName> AllowedStates;                                                      // 0x03B8 (size: 0x10)
    bool AboveBox;                                                                    // 0x03C8 (size: 0x1)
    class UAkAudioEvent* SFX_Rise;                                                    // 0x03D0 (size: 0x8)
    class UAkAudioEvent* SFX_Lower;                                                   // 0x03D8 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_130_ClockPlatform(int32 EntryPoint);
}; // Size: 0x3E0

#endif
