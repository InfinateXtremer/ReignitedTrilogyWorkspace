#ifndef UE4SS_SDK_BP_ParticleShowcase_HPP
#define UE4SS_SDK_BP_ParticleShowcase_HPP

class ABP_ParticleShowcase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class AActor* OriginalViewTarget;                                                 // 0x0338 (size: 0x8)
    FVector CurrentLocation;                                                          // 0x0340 (size: 0xC)
    FVector TargetLocation;                                                           // 0x034C (size: 0xC)
    FRotator InitialRotation;                                                         // 0x0358 (size: 0xC)
    FRotator TargetRotation;                                                          // 0x0364 (size: 0xC)
    float DeltaTime;                                                                  // 0x0370 (size: 0x4)
    float MaxSphereRadius;                                                            // 0x0374 (size: 0x4)
    FVector BoundingOriginOffset;                                                     // 0x0378 (size: 0xC)

    void DebugVisualize();
    void UpdateParticle(class UParticleSystem* NewTemplate);
    void SetView();
    void UserConstructionScript();
    void CameraDistance();
    void UpdateRotation();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
    void CustomEvent_0(class UParticleSystemComponent* PSystem);
    void ExecuteUbergraph_BP_ParticleShowcase(int32 EntryPoint);
}; // Size: 0x384

#endif
