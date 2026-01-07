#ifndef UE4SS_SDK_BP_LS113_AchievementTracker_HPP
#define UE4SS_SDK_BP_LS113_AchievementTracker_HPP

class ABP_LS113_AchievementTracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    int32 totalHitCount;                                                              // 0x0328 (size: 0x4)

    void UserConstructionScript();
    void LS113 - Achievement - Armored Druid Hit();
    void ExecuteUbergraph_BP_LS113_AchievementTracker(int32 EntryPoint);
}; // Size: 0x32C

#endif
