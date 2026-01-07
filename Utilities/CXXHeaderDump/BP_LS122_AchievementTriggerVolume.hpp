#ifndef UE4SS_SDK_BP_LS122_AchievementTriggerVolume_HPP
#define UE4SS_SDK_BP_LS122_AchievementTriggerVolume_HPP

class ABP_LS122_AchievementTriggerVolume_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class ABP_LS122_AchievementTracker_C* tracker;                                    // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_LS122_AchievementTriggerVolume(int32 EntryPoint);
}; // Size: 0x330

#endif
