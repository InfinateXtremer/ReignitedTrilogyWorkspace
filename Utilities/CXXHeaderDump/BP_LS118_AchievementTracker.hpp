#ifndef UE4SS_SDK_BP_LS118_AchievementTracker_HPP
#define UE4SS_SDK_BP_LS118_AchievementTracker_HPP

class ABP_LS118_AchievementTracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS118_AchievementTracker(int32 EntryPoint);
}; // Size: 0x328

#endif
