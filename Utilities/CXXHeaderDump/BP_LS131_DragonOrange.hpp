#ifndef UE4SS_SDK_BP_LS131_DragonOrange_HPP
#define UE4SS_SDK_BP_LS131_DragonOrange_HPP

class ABP_LS131_DragonOrange_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Portal_Mist_TwighlightHarbor;              // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS131_Gate_Glow_Ground;                        // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS131_DragonGate_Glow;                         // 0x0330 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0338 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_SmokeStack_Smoke;                        // 0x0348 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_SmokeStack_Smoke1;                       // 0x0350 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Yellow1;              // 0x0358 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Yellow;               // 0x0360 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0388 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0390 (size: 0x8)
    float Open_NewTrack_0_5A9AE065402AFD9DEFD52DAC2946DDE2;                           // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Open__Direction_5A9AE065402AFD9DEFD52DAC2946DDE2; // 0x039C (size: 0x1)
    class UTimelineComponent* Open;                                                   // 0x03A0 (size: 0x8)
    FVector Closed;                                                                   // 0x03A8 (size: 0xC)
    float opened;                                                                     // 0x03B4 (size: 0x4)
    bool 132Finished;                                                                 // 0x03B8 (size: 0x1)
    float CheckDelay;                                                                 // 0x03BC (size: 0x4)

    void UserConstructionScript();
    void Open__FinishedFunc();
    void Open__UpdateFunc();
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
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS131_DragonOrange(int32 EntryPoint);
}; // Size: 0x3C0

#endif
