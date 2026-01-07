#ifndef UE4SS_SDK_BP_S2_Talisman_HPP
#define UE4SS_SDK_BP_S2_Talisman_HPP

class ABP_S2_Talisman_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    float TalismanScaleTimeline_Rotation_561191F444DBD2F591D9F6932976E78D;            // 0x07D0 (size: 0x4)
    float TalismanScaleTimeline_EmissiveStrength_561191F444DBD2F591D9F6932976E78D;    // 0x07D4 (size: 0x4)
    float TalismanScaleTimeline_Scale_561191F444DBD2F591D9F6932976E78D;               // 0x07D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TalismanScaleTimeline__Direction_561191F444DBD2F591D9F6932976E78D; // 0x07DC (size: 0x1)
    class UTimelineComponent* TalismanScaleTimeline;                                  // 0x07E0 (size: 0x8)
    bool Rotate;                                                                      // 0x07E8 (size: 0x1)
    class UParticleSystemComponent* SparkleFX;                                        // 0x07F0 (size: 0x8)
    class UParticleSystem* LootAmbientVFX_Talisman;                                   // 0x07F8 (size: 0x8)

    void Get Is Visible On Mini Map(bool& is visible);
    void Make Sure Save Data Has At Least 2 params();
    void UserConstructionScript();
    void TalismanScaleTimeline__FinishedFunc();
    void TalismanScaleTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Loot - OnCollected();
    void S2 Talisman - Become Active();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void set collected(bool was collected);
    void Set Visible On Mini Map();
    void ExecuteUbergraph_BP_S2_Talisman(int32 EntryPoint);
}; // Size: 0x800

#endif
