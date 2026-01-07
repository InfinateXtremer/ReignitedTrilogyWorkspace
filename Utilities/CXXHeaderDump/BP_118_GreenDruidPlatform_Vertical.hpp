#ifndef UE4SS_SDK_BP_118_GreenDruidPlatform_Vertical_HPP
#define UE4SS_SDK_BP_118_GreenDruidPlatform_Vertical_HPP

class ABP_118_GreenDruidPlatform_Vertical_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem5;                                  // 0x0328 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem4;                                  // 0x0330 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0338 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem2;                                  // 0x0340 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0348 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0350 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0358 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0360 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0368 (size: 0x8)
    class UStaticMeshComponent* PlatformTop;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* PlatformMesh;                                         // 0x0378 (size: 0x8)
    class UParticleSystemComponent* Dust_Up_VFX;                                      // 0x0380 (size: 0x8)
    class UParticleSystemComponent* Dust_Down_VFX;                                    // 0x0388 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0390 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0398 (size: 0x8)
    float Timeline_0_Sway_1E75517E43F1E70D352C389042008044;                           // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1E75517E43F1E70D352C389042008044; // 0x03A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03A8 (size: 0x8)
    float ScaleReturn_Percent_A8582B4F4F0103DE43A5DDA23368AC27;                       // 0x03B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ScaleReturn__Direction_A8582B4F4F0103DE43A5DDA23368AC27; // 0x03B4 (size: 0x1)
    class UTimelineComponent* ScaleReturn;                                            // 0x03B8 (size: 0x8)
    float ScaleModify_val_2E10F7634828145FF42CF398D35C4509;                           // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ScaleModify__Direction_2E10F7634828145FF42CF398D35C4509; // 0x03C4 (size: 0x1)
    class UTimelineComponent* ScaleModify;                                            // 0x03C8 (size: 0x8)
    bool startEnergized?;                                                             // 0x03D0 (size: 0x1)
    bool isEnergized?;                                                                // 0x03D1 (size: 0x1)
    class UAkAudioEvent* SFX_Move;                                                    // 0x03D8 (size: 0x8)
    float ScaleAffectAmount;                                                          // 0x03E0 (size: 0x4)
    float StartingZ;                                                                  // 0x03E4 (size: 0x4)
    float EndingZ;                                                                    // 0x03E8 (size: 0x4)
    float InitDelay;                                                                  // 0x03EC (size: 0x4)
    class ABP_CES1035_GreenDruid_C* GreernDruidReference;                             // 0x03F0 (size: 0x8)
    bool playUpAnim?;                                                                 // 0x03F8 (size: 0x1)
    bool skillPointCancel?;                                                           // 0x03F9 (size: 0x1)
    float ScaleOnEnd;                                                                 // 0x03FC (size: 0x4)
    FTimerHandle SFX_Timer;                                                           // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void ScaleModify__FinishedFunc();
    void ScaleModify__UpdateFunc();
    void ScaleReturn__FinishedFunc();
    void ScaleReturn__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Energize();
    void De-energize();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void Play Sound();
    void Druid Platform - On Player Ready();
    void ExecuteUbergraph_BP_118_GreenDruidPlatform_Vertical(int32 EntryPoint);
}; // Size: 0x408

#endif
