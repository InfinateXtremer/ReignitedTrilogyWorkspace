#ifndef UE4SS_SDK_BP_LS212_LizardEgg_HPP
#define UE4SS_SDK_BP_LS212_LizardEgg_HPP

class ABP_LS212_LizardEgg_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03D8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    float Shake_Rotate_6D1C1FA140BF6FC98409D391928FF213;                              // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Shake__Direction_6D1C1FA140BF6FC98409D391928FF213; // 0x03F4 (size: 0x1)
    class UTimelineComponent* Shake;                                                  // 0x03F8 (size: 0x8)
    bool Falling;                                                                     // 0x0400 (size: 0x1)
    TSubclassOf<class AActor> ItemToSpawn;                                            // 0x0408 (size: 0x8)
    class UParticleSystemComponent* FallTrail;                                        // 0x0410 (size: 0x8)
    class ABP_CBS2002_EggManager_C* EggManager;                                       // 0x0418 (size: 0x8)

    void UserConstructionScript();
    void Shake__FinishedFunc();
    void Shake__UpdateFunc();
    void StartShake();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Drop();
    void ReceiveBeginPlay();
    void BreakEmpty();
    void ExecuteUbergraph_BP_LS212_LizardEgg(int32 EntryPoint);
}; // Size: 0x420

#endif
