#ifndef UE4SS_SDK_BP_BoneSeeSaw_HPP
#define UE4SS_SDK_BP_BoneSeeSaw_HPP

class ABP_BoneSeeSaw_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0320 (size: 0x8)
    class USphereComponent* TriggerSphere;                                            // 0x0328 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0330 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Pivot;                                                // 0x0348 (size: 0x8)
    float Timeline_1_NewTrack_1_B5A28703430725B93C55C2A1ED8DB603;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_B5A28703430725B93C55C2A1ED8DB603; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0358 (size: 0x8)
    float Timeline_0_NewTrack_0_2B282A384C07935752CAF5AF83E58B87;                     // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2B282A384C07935752CAF5AF83E58B87; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0368 (size: 0x8)
    bool ready;                                                                       // 0x0370 (size: 0x1)
    class AActor* Player;                                                             // 0x0378 (size: 0x8)
    class AController* Player Controller;                                             // 0x0380 (size: 0x8)
    FActiveGameplayEffectHandle Disable Gravity;                                      // 0x0388 (size: 0x8)
    float Alpha;                                                                      // 0x0390 (size: 0x4)
    bool IsActive;                                                                    // 0x0394 (size: 0x1)
    class UAkAudioEvent* SFX_Launch;                                                  // 0x0398 (size: 0x8)
    class ASkeletalMeshActor* icebuilderLingerRef;                                    // 0x03A0 (size: 0x8)
    class AActor* icebuilderL;                                                        // 0x03A8 (size: 0x8)
    class AActor* icebuilderR;                                                        // 0x03B0 (size: 0x8)
    class AActor* icebuilderM;                                                        // 0x03B8 (size: 0x8)
    TArray<class ABP_211_Eskimo_BASE_C*> icebuilders;                                 // 0x03C0 (size: 0x10)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void StopTimeline();
    void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LS211 - Force Seesaw(float LaunchDelay, class AActor* IGCRef);
    void ExecuteUbergraph_BP_BoneSeeSaw(int32 EntryPoint);
}; // Size: 0x3D0

#endif
