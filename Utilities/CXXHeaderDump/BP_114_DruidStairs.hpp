#ifndef UE4SS_SDK_BP_114_DruidStairs_HPP
#define UE4SS_SDK_BP_114_DruidStairs_HPP

class ABP_114_DruidStairs_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBoxComponent* Box_R;                                                       // 0x0450 (size: 0x8)
    class UBoxComponent* Box_L;                                                       // 0x0458 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0460 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0468 (size: 0x8)
    class USceneComponent* Scene4;                                                    // 0x0470 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0480 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0488 (size: 0x8)
    class USceneComponent* Scene3;                                                    // 0x0490 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0498 (size: 0x8)
    class USceneComponent* Scene2;                                                    // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04A8 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x04B0 (size: 0x8)
    float SlideyCubeScale_NewTrack_0_EF7E2C1C4C93E4806EA36C9747E61035;                // 0x04B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SlideyCubeScale__Direction_EF7E2C1C4C93E4806EA36C9747E61035; // 0x04BC (size: 0x1)
    class UTimelineComponent* SlideyCubeScale;                                        // 0x04C0 (size: 0x8)
    float TiltTimeline_Scale_BEB7645442276862754509922087A590;                        // 0x04C8 (size: 0x4)
    float TiltTimeline_Tilt_BEB7645442276862754509922087A590;                         // 0x04CC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TiltTimeline__Direction_BEB7645442276862754509922087A590; // 0x04D0 (size: 0x1)
    class UTimelineComponent* TiltTimeline;                                           // 0x04D8 (size: 0x8)
    TArray<class USceneComponent*> AllScenes;                                         // 0x04E0 (size: 0x10)
    bool isTilted;                                                                    // 0x04F0 (size: 0x1)
    bool Debug;                                                                       // 0x04F1 (size: 0x1)
    class ABP_CES1035_GreenDruid_C* druidRef;                                         // 0x04F8 (size: 0x8)
    bool preventChange?;                                                              // 0x0500 (size: 0x1)

    void UserConstructionScript();
    void TiltTimeline__FinishedFunc();
    void TiltTimeline__UpdateFunc();
    void SlideyCubeScale__FinishedFunc();
    void SlideyCubeScale__UpdateFunc();
    void ReceiveBeginPlay();
    void Energize();
    void De-energize();
    void 114 druid stairs - player ready();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_R_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_114_DruidStairs(int32 EntryPoint);
}; // Size: 0x501

#endif
