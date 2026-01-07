#ifndef UE4SS_SDK_BP_115_EnergizedPlatform_Sway_HPP
#define UE4SS_SDK_BP_115_EnergizedPlatform_Sway_HPP

class ABP_115_EnergizedPlatform_Sway_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x03D0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03E0 (size: 0x8)
    float DruidTimer_Sway_572706EE4E807D9D792C7DA9F41F0CA2;                           // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DruidTimer__Direction_572706EE4E807D9D792C7DA9F41F0CA2; // 0x03EC (size: 0x1)
    class UTimelineComponent* DruidTimer;                                             // 0x03F0 (size: 0x8)
    float ReturnTimeline_Return_1DF42DBD49E8EEA0EA592CBA82BDA82C;                     // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReturnTimeline__Direction_1DF42DBD49E8EEA0EA592CBA82BDA82C; // 0x03FC (size: 0x1)
    class UTimelineComponent* ReturnTimeline;                                         // 0x0400 (size: 0x8)
    float SwayTimeline_Sway_5D88D2AB4467BD5EABA8B4A378DE14BA;                         // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SwayTimeline__Direction_5D88D2AB4467BD5EABA8B4A378DE14BA; // 0x040C (size: 0x1)
    class UTimelineComponent* SwayTimeline;                                           // 0x0410 (size: 0x8)
    float swayVal;                                                                    // 0x0418 (size: 0x4)
    float FinalRoll;                                                                  // 0x041C (size: 0x4)
    class ABP_CES1035_GreenDruid_C* GreernDruidReference;                             // 0x0420 (size: 0x8)
    bool playLeftAnim?;                                                               // 0x0428 (size: 0x1)

    void UserConstructionScript();
    void SwayTimeline__FinishedFunc();
    void SwayTimeline__UpdateFunc();
    void ReturnTimeline__FinishedFunc();
    void ReturnTimeline__UpdateFunc();
    void DruidTimer__FinishedFunc();
    void DruidTimer__UpdateFunc();
    void Energize();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void De-energize();
    void ExecuteUbergraph_BP_115_EnergizedPlatform_Sway(int32 EntryPoint);
}; // Size: 0x429

#endif
