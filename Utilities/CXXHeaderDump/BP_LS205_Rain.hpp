#ifndef UE4SS_SDK_BP_LS205_Rain_HPP
#define UE4SS_SDK_BP_LS205_Rain_HPP

class ABP_LS205_Rain_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_Spyro_Rain;                                    // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_Camera_Rain;                                   // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    bool IsRaining;                                                                   // 0x0340 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void LS205 - Player Spawn();
    void ExecuteUbergraph_BP_LS205_Rain(int32 EntryPoint);
}; // Size: 0x341

#endif
