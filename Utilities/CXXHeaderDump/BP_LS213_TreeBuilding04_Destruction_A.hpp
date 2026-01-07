#ifndef UE4SS_SDK_BP_LS213_TreeBuilding04_Destruction_A_HPP
#define UE4SS_SDK_BP_LS213_TreeBuilding04_Destruction_A_HPP

class ABP_LS213_TreeBuilding04_Destruction_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_A_04;             // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_B_03;             // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_B_02;             // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_A_03;             // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_B01;              // 0x0348 (size: 0x8)
    class USceneComponent* Particle B;                                                // 0x0350 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_A_02;             // 0x0358 (size: 0x8)
    class UParticleSystemComponent* PS_LS213_TreeBuilding_Explosion_A01;              // 0x0360 (size: 0x8)
    class USceneComponent* Particle A;                                                // 0x0368 (size: 0x8)
    class UDestructibleComponent* SM_LS213_TreeBuilding04_Top_DM;                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* SM_LS213_TreeBuilding04_Base;                         // 0x0378 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0380 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BiggaBoom();
    void ExecuteUbergraph_BP_LS213_TreeBuilding04_Destruction_A(int32 EntryPoint);
}; // Size: 0x388

#endif
