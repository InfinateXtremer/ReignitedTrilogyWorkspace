#ifndef UE4SS_SDK_BP_Spyro_Jetboard_NoCol_HPP
#define UE4SS_SDK_BP_Spyro_Jetboard_NoCol_HPP

class ABP_Spyro_Jetboard_NoCol_C : public APhasmidSkateboard
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UParticleSystemComponent* R_PS_Spyro_RocketSkateboard_AutoTurbo;            // 0x0328 (size: 0x8)
    class UParticleSystemComponent* L_PS_Spyro_RocketSkateboard_AutoTurbo;            // 0x0330 (size: 0x8)
    class UParticleSystemComponent* R_PS_Spyro_RocketSkateboard_Turbo;                // 0x0338 (size: 0x8)
    class UParticleSystemComponent* L_PS_Spyro_RocketSkateboard_Turbo;                // 0x0340 (size: 0x8)
    class UParticleSystemComponent* R_PS_Spyro_RocketSkateboard_Idle;                 // 0x0348 (size: 0x8)
    class UParticleSystemComponent* L_PS_Spyro_RocketSkateboard_Idle;                 // 0x0350 (size: 0x8)
    class UAkComponent* AkOneShot;                                                    // 0x0358 (size: 0x8)
    class UAkComponent* AkRollLoop;                                                   // 0x0360 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0368 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0370 (size: 0x8)

    void UserConstructionScript();
    void OnVFXUpdate(class ACharacter* charOwner, float dt, FName State, float Speed);
    void OnVFXEvent(class ACharacter* charOwner, FName evtName);
    void ExecuteUbergraph_BP_Spyro_Jetboard_NoCol(int32 EntryPoint);
}; // Size: 0x378

#endif
