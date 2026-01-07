#ifndef UE4SS_SDK_BP_SpeedwayRing_Green_HPP
#define UE4SS_SDK_BP_SpeedwayRing_Green_HPP

class ABP_SpeedwayRing_Green_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UBoxComponent* OffCourse Collision;                                         // 0x0330 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0338 (size: 0x8)
    class USphereComponent* Sphere Collision;                                         // 0x0340 (size: 0x8)
    class UBoxComponent* Box Collision;                                               // 0x0348 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    bool Player_In_Sphere;                                                            // 0x0360 (size: 0x1)
    class AMission_Master_Flight_Race_C* SpyroRaceController;                         // 0x0368 (size: 0x8)
    bool OnDeck;                                                                      // 0x0370 (size: 0x1)
    bool Next;                                                                        // 0x0371 (size: 0x1)
    class ABP_SpeedwayRing_Green_C* NextRing;                                         // 0x0378 (size: 0x8)
    float RingRotation;                                                               // 0x0380 (size: 0x4)
    class AQuestLevelActor* Qla;                                                      // 0x0388 (size: 0x8)
    bool FirstRing;                                                                   // 0x0390 (size: 0x1)
    bool SecondRing;                                                                  // 0x0391 (size: 0x1)
    class UAkAudioEvent* SFX_SpeedwayRing_Loop;                                       // 0x0398 (size: 0x8)
    bool RingComplete;                                                                // 0x03A0 (size: 0x1)
    bool Dead;                                                                        // 0x03A1 (size: 0x1)
    int32 ringNum;                                                                    // 0x03A4 (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere Collision_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Sphere Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OffCourse Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SpeedwayRing_Green(int32 EntryPoint);
}; // Size: 0x3A8

#endif
