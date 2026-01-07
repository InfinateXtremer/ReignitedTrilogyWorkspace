#ifndef UE4SS_SDK_BP_114_DruidSplineObject_HPP
#define UE4SS_SDK_BP_114_DruidSplineObject_HPP

class ABP_114_DruidSplineObject_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    float SplineTimeline_SLOW_percent_9C2D61F44ECD4DE3BED6B49ADDF57D6A;               // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_SLOW__Direction_9C2D61F44ECD4DE3BED6B49ADDF57D6A; // 0x03F4 (size: 0x1)
    class UTimelineComponent* SplineTimeline_SLOW;                                    // 0x03F8 (size: 0x8)
    float SplineTimeline_percent_2AE86F8C4101C96990C468AC0940F8A3;                    // 0x0400 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline__Direction_2AE86F8C4101C96990C468AC0940F8A3; // 0x0404 (size: 0x1)
    class UTimelineComponent* SplineTimeLine;                                         // 0x0408 (size: 0x8)
    bool startDown?;                                                                  // 0x0410 (size: 0x1)
    bool isDown?;                                                                     // 0x0411 (size: 0x1)
    bool endDown?;                                                                    // 0x0412 (size: 0x1)
    class ABP_CES1033_Beast_C* BeastReference;                                        // 0x0418 (size: 0x8)
    int32 SplineType;                                                                 // 0x0420 (size: 0x4)
    class UParticleSystem* Mover Particle;                                            // 0x0428 (size: 0x8)
    FVector Mesh Initial Location;                                                    // 0x0430 (size: 0xC)
    FRotator Mesh initial rotation;                                                   // 0x043C (size: 0xC)
    FVector Reverse Offset;                                                           // 0x0448 (size: 0xC)
    class UAkAudioEvent* SFX_Movement;                                                // 0x0458 (size: 0x8)
    bool useSlowVersion?;                                                             // 0x0460 (size: 0x1)
    class ABP_CES1035_GreenDruid_C* druidRef;                                         // 0x0468 (size: 0x8)
    bool preventChange?;                                                              // 0x0470 (size: 0x1)
    bool isBeastPlatform?;                                                            // 0x0471 (size: 0x1)
    bool isPartOfTripleStairBlock?;                                                   // 0x0472 (size: 0x1)

    void UserConstructionScript();
    void SplineTimeLine__FinishedFunc();
    void SplineTimeLine__UpdateFunc();
    void SplineTimeline_SLOW__FinishedFunc();
    void SplineTimeline_SLOW__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void Energize();
    void De-energize();
    void 114 Druid Platform Player Ready();
    void ExecuteUbergraph_BP_114_DruidSplineObject(int32 EntryPoint);
}; // Size: 0x473

#endif
