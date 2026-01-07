#ifndef UE4SS_SDK_2218_BoatProp_HPP
#define UE4SS_SDK_2218_BoatProp_HPP

class A2218_BoatProp_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03A8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03B0 (size: 0x8)
    class UParticleSystemComponent* PS_WaterWake_Rear;                                // 0x03B8 (size: 0x8)
    class UParticleSystemComponent* PS_EngineSmoke;                                   // 0x03C0 (size: 0x8)
    FTransform NewVar_0;                                                              // 0x03D0 (size: 0x30)
    bool OnRamp;                                                                      // 0x0400 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SFX_Start_Engine();
    void SFX_Stop_All();
    void SFX_Ramp_Up();
    void SFX_Ramp_Down();
    void ExecuteUbergraph_2218_BoatProp(int32 EntryPoint);
}; // Size: 0x401

#endif
