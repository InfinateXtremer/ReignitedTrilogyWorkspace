#ifndef UE4SS_SDK_BP_LS131_DragonPurple_HPP
#define UE4SS_SDK_BP_LS131_DragonPurple_HPP

class ABP_LS131_DragonPurple_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Portal_Mist_GnorcCove;                     // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS131_DragonGate_Glow;                         // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Pink3;                // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Pink2;                // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Pink1;                // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Pink;                 // 0x0348 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_SmokeStack_Smoke;                        // 0x0350 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_SmokeStack_Smoke1;                       // 0x0358 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x0360 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0380 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0388 (size: 0x8)
    FVector Closed;                                                                   // 0x0390 (size: 0xC)
    float opened;                                                                     // 0x039C (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS131_DragonPurple(int32 EntryPoint);
}; // Size: 0x3A0

#endif
