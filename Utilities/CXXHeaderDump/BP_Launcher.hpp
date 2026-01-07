#ifndef UE4SS_SDK_BP_Launcher_HPP
#define UE4SS_SDK_BP_Launcher_HPP

class ABP_Launcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UParticleSystemComponent* VFX_Launch;                                       // 0x0330 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0340 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0348 (size: 0x8)
    class UArrowComponent* Arrow6;                                                    // 0x0350 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0358 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x0360 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0370 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0378 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0390 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0398 (size: 0x8)
    float Timeline_3_NewTrack_1_970BA71B450199BEB0526EA74C39680B;                     // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_970BA71B450199BEB0526EA74C39680B; // 0x03A4 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x03A8 (size: 0x8)
    float Timeline_2_NewTrack_1_345B1168482609403965818F8832CDCB;                     // 0x03B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_345B1168482609403965818F8832CDCB; // 0x03B4 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x03B8 (size: 0x8)
    float Timeline_1_NewTrack_0_3EB99DB344CE9DE8A4A707BDFEF8EF43;                     // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3EB99DB344CE9DE8A4A707BDFEF8EF43; // 0x03C4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x03C8 (size: 0x8)
    float Timeline_0_NewTrack_0_93ADE1A149A96568AE3AB2A9F3248C43;                     // 0x03D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_93ADE1A149A96568AE3AB2A9F3248C43; // 0x03D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03D8 (size: 0x8)
    TArray<class AActor*> Campfire;                                                   // 0x03E0 (size: 0x10)
    class UParticleSystemComponent* Particle1;                                        // 0x03F0 (size: 0x8)
    class UParticleSystemComponent* Particle2;                                        // 0x03F8 (size: 0x8)
    class AController* Player Controller;                                             // 0x0400 (size: 0x8)
    class AActor* Player;                                                             // 0x0408 (size: 0x8)
    FActiveGameplayEffectHandle Disable Gravity;                                      // 0x0410 (size: 0x8)
    bool ready;                                                                       // 0x0418 (size: 0x1)
    float Alpha;                                                                      // 0x041C (size: 0x4)
    class AActor* BigShip;                                                            // 0x0420 (size: 0x8)
    class AEmitter* VFX_Smoke;                                                        // 0x0428 (size: 0x8)
    class AEmitter* VFX_Pipe_Steam;                                                   // 0x0430 (size: 0x8)
    bool Active;                                                                      // 0x0438 (size: 0x1)
    int32 CamIndex;                                                                   // 0x043C (size: 0x4)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StopTimeline();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ResetGate();
    void ExecuteUbergraph_BP_Launcher(int32 EntryPoint);
}; // Size: 0x440

#endif
