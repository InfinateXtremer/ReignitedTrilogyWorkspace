#ifndef UE4SS_SDK_BP_Loot_RewardTalisman_Short1_HPP
#define UE4SS_SDK_BP_Loot_RewardTalisman_Short1_HPP

class ABP_Loot_RewardTalisman_Short1_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    float ShrinkMe_NewTrack_2_C44AEED04D7DE8C48B226F87200D8960;                       // 0x0458 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShrinkMe__Direction_C44AEED04D7DE8C48B226F87200D8960; // 0x045C (size: 0x1)
    class UTimelineComponent* ShrinkMe;                                               // 0x0460 (size: 0x8)
    FVector GrowMe_SizeV_3FA785A04254A7DD2D3F5C899B4F0FFF;                            // 0x0468 (size: 0xC)
    float GrowMe_NewTrack_0_3FA785A04254A7DD2D3F5C899B4F0FFF;                         // 0x0474 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowMe__Direction_3FA785A04254A7DD2D3F5C899B4F0FFF; // 0x0478 (size: 0x1)
    class UTimelineComponent* GrowMe;                                                 // 0x0480 (size: 0x8)
    class ABP_Loot_BASE_C* OrbToReward;                                               // 0x0488 (size: 0x8)
    int32 rewardSequence;                                                             // 0x0490 (size: 0x4)

    void UserConstructionScript();
    void GrowMe__FinishedFunc();
    void GrowMe__UpdateFunc();
    void ShrinkMe__FinishedFunc();
    void ShrinkMe__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Loot_RewardTalisman_Short1(int32 EntryPoint);
}; // Size: 0x494

#endif
