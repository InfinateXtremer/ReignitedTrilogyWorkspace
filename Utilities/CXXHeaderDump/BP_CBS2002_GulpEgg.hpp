#ifndef UE4SS_SDK_BP_CBS2002_GulpEgg_HPP
#define UE4SS_SDK_BP_CBS2002_GulpEgg_HPP

class ABP_CBS2002_GulpEgg_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* Shadow;                                           // 0x03D0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03E0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03F0 (size: 0x8)
    float EggContentScale_Scale_C03981F54EEAC16EFE2710ACFF076E0C;                     // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> EggContentScale__Direction_C03981F54EEAC16EFE2710ACFF076E0C; // 0x03FC (size: 0x1)
    class UTimelineComponent* EggContentScale;                                        // 0x0400 (size: 0x8)
    float Shake_StraightenUp_0F49BA234987D1A2093460B1390BA298;                        // 0x0408 (size: 0x4)
    float Shake_Bounce_0F49BA234987D1A2093460B1390BA298;                              // 0x040C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Shake__Direction_0F49BA234987D1A2093460B1390BA298; // 0x0410 (size: 0x1)
    class UTimelineComponent* Shake;                                                  // 0x0418 (size: 0x8)
    bool Falling;                                                                     // 0x0420 (size: 0x1)
    float FixedShadowZ;                                                               // 0x0424 (size: 0x4)
    TSubclassOf<class AActor> ItemToSpawn;                                            // 0x0428 (size: 0x8)
    class UParticleSystemComponent* FallTrail;                                        // 0x0430 (size: 0x8)
    class ABP_CBS2002_EggManager_C* EggManager;                                       // 0x0438 (size: 0x8)
    FVector LandedLocation;                                                           // 0x0440 (size: 0xC)

    void PositionShadow();
    void UserConstructionScript();
    void Shake__FinishedFunc();
    void Shake__UpdateFunc();
    void EggContentScale__FinishedFunc();
    void EggContentScale__UpdateFunc();
    void ReceiveBeginPlay();
    void StartShake();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Drop();
    void BreakEmpty();
    void ReceiveTick(float DeltaSeconds);
    void ScaleUpEggContent(class AActor* Content);
    void ExecuteUbergraph_BP_CBS2002_GulpEgg(int32 EntryPoint);
}; // Size: 0x44C

#endif
