#ifndef UE4SS_SDK_BP_Loot_Reward_Orb_test_HPP
#define UE4SS_SDK_BP_Loot_Reward_Orb_test_HPP

class ABP_Loot_Reward_Orb_test_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    float BounceMe_NewTrack_0_443EC2544BAF9DFD905DE9A0C46984B8;                       // 0x0458 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BounceMe__Direction_443EC2544BAF9DFD905DE9A0C46984B8; // 0x045C (size: 0x1)
    class UTimelineComponent* BounceMe;                                               // 0x0460 (size: 0x8)
    float ShrinkMe_NewTrack_2_5137ED994EFBE2EB07E79CB334DF4E01;                       // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShrinkMe__Direction_5137ED994EFBE2EB07E79CB334DF4E01; // 0x046C (size: 0x1)
    class UTimelineComponent* ShrinkMe;                                               // 0x0470 (size: 0x8)
    FVector GrowMe_SizeV_86ACBBAA499B38B54F96B38F9FFB3A7E;                            // 0x0478 (size: 0xC)
    float GrowMe_NewTrack_0_86ACBBAA499B38B54F96B38F9FFB3A7E;                         // 0x0484 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowMe__Direction_86ACBBAA499B38B54F96B38F9FFB3A7E; // 0x0488 (size: 0x1)
    class UTimelineComponent* GrowMe;                                                 // 0x0490 (size: 0x8)
    class ABP_Loot_BASE_C* OrbToReward;                                               // 0x0498 (size: 0x8)
    int32 rewardSequence;                                                             // 0x04A0 (size: 0x4)
    class UParticleSystemComponent* Orb_Collected;                                    // 0x04A8 (size: 0x8)

    void UserConstructionScript();
    void GrowMe__FinishedFunc();
    void GrowMe__UpdateFunc();
    void ShrinkMe__FinishedFunc();
    void ShrinkMe__UpdateFunc();
    void BounceMe__FinishedFunc();
    void BounceMe__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Loot_Reward_Orb_test(int32 EntryPoint);
}; // Size: 0x4B0

#endif
