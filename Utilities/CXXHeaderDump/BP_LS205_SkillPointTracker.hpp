#ifndef UE4SS_SDK_BP_LS205_SkillPointTracker_HPP
#define UE4SS_SDK_BP_LS205_SkillPointTracker_HPP

class ABP_LS205_SkillPointTracker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class ABP_205_WindmillSmall_C*> AllWindmills;                              // 0x0328 (size: 0x10)
    int32 deadCount;                                                                  // 0x0338 (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS205_SkillPointTracker(int32 EntryPoint);
}; // Size: 0x33C

#endif
