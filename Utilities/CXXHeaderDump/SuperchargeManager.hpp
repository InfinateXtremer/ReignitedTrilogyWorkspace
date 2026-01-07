#ifndef UE4SS_SDK_SuperchargeManager_HPP
#define UE4SS_SDK_SuperchargeManager_HPP

class USuperchargeManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    class UParticleSystem* MediumParticleTemplate;                                    // 0x00F8 (size: 0x8)
    class UParticleSystem* HighParticleTemplate;                                      // 0x0100 (size: 0x8)
    class UParticleSystem* ActiveParticleTemplate;                                    // 0x0108 (size: 0x8)
    class UParticleSystem* LowParticleTemplate;                                       // 0x0110 (size: 0x8)
    float TimeInSuperchargeRamp;                                                      // 0x0118 (size: 0x4)
    bool InSuperchargeRamp;                                                           // 0x011C (size: 0x1)
    class UParticleSystemComponent* ActiveParticle;                                   // 0x0120 (size: 0x8)
    float TimeStopped;                                                                // 0x0128 (size: 0x4)
    class UParticleSystem* HighestParticleTemplate;                                   // 0x0130 (size: 0x8)

    void NewActiveParticle(class UParticleSystem* Emitter Template);
    void UpdateParticles();
    void UpdateTimeInSuperchargeRamp(float DeltaTime);
    void SuperchargeEndOverlap();
    void SuperchargeBeginOverlap();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SuperchargeManager(int32 EntryPoint);
}; // Size: 0x138

#endif
