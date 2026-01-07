#ifndef UE4SS_SDK_BP_118_DruidPlatform_Sway_HPP
#define UE4SS_SDK_BP_118_DruidPlatform_Sway_HPP

class ABP_118_DruidPlatform_Sway_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x03D8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x03E0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x03E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03F0 (size: 0x8)
    float Timeline_0_Sway_9E548853412028C3535FD1BDCBD65272;                           // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9E548853412028C3535FD1BDCBD65272; // 0x03FC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0400 (size: 0x8)
    float ReturnTimeline_Return_92F784F143EF884E35B6278F50F48C1E;                     // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReturnTimeline__Direction_92F784F143EF884E35B6278F50F48C1E; // 0x040C (size: 0x1)
    class UTimelineComponent* ReturnTimeline;                                         // 0x0410 (size: 0x8)
    float SwayTimeline_Sway_1FE96D69458C40921FF3A4B65E8521DB;                         // 0x0418 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SwayTimeline__Direction_1FE96D69458C40921FF3A4B65E8521DB; // 0x041C (size: 0x1)
    class UTimelineComponent* SwayTimeline;                                           // 0x0420 (size: 0x8)
    float swayVal;                                                                    // 0x0428 (size: 0x4)
    float FinalRoll;                                                                  // 0x042C (size: 0x4)
    class ABP_CES1035_GreenDruid_C* GreernDruidReference;                             // 0x0430 (size: 0x8)
    bool playLeftAnim?;                                                               // 0x0438 (size: 0x1)
    bool skillPointCancel?;                                                           // 0x0439 (size: 0x1)
    class ABP_VFX_LS118_Druid_Platform_C* VFX_Ref;                                    // 0x0440 (size: 0x8)
    FTimerHandle SFX_Timer;                                                           // 0x0448 (size: 0x8)

    void UserConstructionScript();
    void SwayTimeline__FinishedFunc();
    void SwayTimeline__UpdateFunc();
    void ReturnTimeline__FinishedFunc();
    void ReturnTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Energize();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void De-energize();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Play Sound();
    void Druid Platform H - On Player Ready();
    void ExecuteUbergraph_BP_118_DruidPlatform_Sway(int32 EntryPoint);
}; // Size: 0x450

#endif
