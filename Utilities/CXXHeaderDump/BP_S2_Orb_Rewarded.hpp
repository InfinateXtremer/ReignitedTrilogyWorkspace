#ifndef UE4SS_SDK_BP_S2_Orb_Rewarded_HPP
#define UE4SS_SDK_BP_S2_Orb_Rewarded_HPP

class ABP_S2_Orb_Rewarded_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x07D0 (size: 0x8)
    class UTextRenderComponent* OrbName;                                              // 0x07D8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x07E0 (size: 0x8)
    float OrbSpline_NewTrack_2_8C486F8E43F29766D2A76492F204DAF5;                      // 0x07E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> OrbSpline__Direction_8C486F8E43F29766D2A76492F204DAF5; // 0x07EC (size: 0x1)
    class UTimelineComponent* OrbSpline;                                              // 0x07F0 (size: 0x8)
    bool onSpline;                                                                    // 0x07F8 (size: 0x1)
    FVector initial world position;                                                   // 0x07FC (size: 0xC)
    bool IsLevelEndReward;                                                            // 0x0808 (size: 0x1)

    void get map object position(FVector& Position);
    void GetChallengeState(FVector& world position, bool& Active, bool& Completed);
    void UserConstructionScript();
    void OrbSpline__FinishedFunc();
    void OrbSpline__UpdateFunc();
    void Loot - OnCollected();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void set collected(bool was collected);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Set Challenge Activated();
    void ExecuteUbergraph_BP_S2_Orb_Rewarded(int32 EntryPoint);
}; // Size: 0x809

#endif
