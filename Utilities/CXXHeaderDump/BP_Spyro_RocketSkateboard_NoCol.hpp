#ifndef UE4SS_SDK_BP_Spyro_RocketSkateboard_NoCol_HPP
#define UE4SS_SDK_BP_Spyro_RocketSkateboard_NoCol_HPP

class ABP_Spyro_RocketSkateboard_NoCol_C : public APhasmidSkateboard
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* RightRocketIdlePS;                                // 0x0320 (size: 0x8)
    class UParticleSystemComponent* LeftRocketIdlePS;                                 // 0x0328 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0330 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0338 (size: 0x8)
    class UParticleSystemComponent* RightRocketAutoTurboPS;                           // 0x0340 (size: 0x8)
    class UParticleSystemComponent* LeftRocketAutoTurboPS;                            // 0x0348 (size: 0x8)
    class UParticleSystemComponent* RightRocketTurboPS;                               // 0x0350 (size: 0x8)
    class UParticleSystemComponent* LeftRocketTurboPS;                                // 0x0358 (size: 0x8)
    class UAkComponent* AkRollLoop;                                                   // 0x0360 (size: 0x8)
    class UAkComponent* AkOneShot;                                                    // 0x0368 (size: 0x8)
    class UPoseableMeshComponent* Mesh;                                               // 0x0370 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0378 (size: 0x8)

    void UserConstructionScript();
    void OnVFXUpdate(class ACharacter* charOwner, float dt, FName State, float Speed);
    void OnVFXEvent(class ACharacter* charOwner, FName evtName);
    void ExecuteUbergraph_BP_Spyro_RocketSkateboard_NoCol(int32 EntryPoint);
}; // Size: 0x380

#endif
