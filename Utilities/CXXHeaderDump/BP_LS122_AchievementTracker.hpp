#ifndef UE4SS_SDK_BP_LS122_AchievementTracker_HPP
#define UE4SS_SDK_BP_LS122_AchievementTracker_HPP

class ABP_LS122_AchievementTracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class ABP_LS122_AchievementTriggerVolume_C*> volumes;                      // 0x0328 (size: 0x10)
    TArray<class ABP_LS122_AchievementTriggerVolume_C*> volumesTriggered;             // 0x0338 (size: 0x10)

    void UserConstructionScript();
    void LS122 - Achievement - Ramp Trigger(class ABP_LS122_AchievementTriggerVolume_C* Volume);
    void ExecuteUbergraph_BP_LS122_AchievementTracker(int32 EntryPoint);
}; // Size: 0x348

#endif
