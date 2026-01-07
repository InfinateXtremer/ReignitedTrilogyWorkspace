#ifndef UE4SS_SDK_BP_LS116_AchievementTracker_HPP
#define UE4SS_SDK_BP_LS116_AchievementTracker_HPP

class ABP_LS116_AchievementTracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ABP_CES1011_ThiefBlue_C* ThiefRef;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS116_AchievementTracker(int32 EntryPoint);
}; // Size: 0x330

#endif
