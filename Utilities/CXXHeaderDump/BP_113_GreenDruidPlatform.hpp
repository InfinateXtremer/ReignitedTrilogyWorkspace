#ifndef UE4SS_SDK_BP_113_GreenDruidPlatform_HPP
#define UE4SS_SDK_BP_113_GreenDruidPlatform_HPP

class ABP_113_GreenDruidPlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* Dust_Up_VFX;                                      // 0x0320 (size: 0x8)
    class UParticleSystemComponent* Dust_Down_VFX;                                    // 0x0328 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0330 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0338 (size: 0x8)
    class UStaticMeshComponent* PlatformMesh;                                         // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float PlatformTimeline_RaisePercent_60F3FA6641C5617E7A97D0B8400066A4;             // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlatformTimeline__Direction_60F3FA6641C5617E7A97D0B8400066A4; // 0x0354 (size: 0x1)
    class UTimelineComponent* PlatformTimeline;                                       // 0x0358 (size: 0x8)
    bool startEnergized?;                                                             // 0x0360 (size: 0x1)
    bool isEnergized?;                                                                // 0x0361 (size: 0x1)
    class UAkAudioEvent* SFX_Move;                                                    // 0x0368 (size: 0x8)
    bool doRespawnChecks?;                                                            // 0x0370 (size: 0x1)
    class ABP_CES1035_GreenDruid_C* druidRef;                                         // 0x0378 (size: 0x8)
    bool ignoreCommands?;                                                             // 0x0380 (size: 0x1)

    void UserConstructionScript();
    void PlatformTimeline__FinishedFunc();
    void PlatformTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void Energize();
    void De-energize();
    void 113 Druid Platform - Enemy Alive check();
    void ExecuteUbergraph_BP_113_GreenDruidPlatform(int32 EntryPoint);
}; // Size: 0x381

#endif
