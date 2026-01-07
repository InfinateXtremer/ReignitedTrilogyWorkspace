#ifndef UE4SS_SDK_BP_SkateScoreChallenge_HPP
#define UE4SS_SDK_BP_SkateScoreChallenge_HPP

class ABP_SkateScoreChallenge_C : public ASkateScoreChallenge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E8 (size: 0x8)
    class ABP_LS312_Skate_HalfPipeLeapTrick_C* LS312_HalfPipeLeap;                    // 0x06F0 (size: 0x8)
    class ABP_LS312_Skate_TripleTowerTrick_C* LS312_TripleTower;                      // 0x06F8 (size: 0x8)

    void UserConstructionScript();
    void OnScoreStart();
    void OnScoreEnd();
    void OnLS312HalfPipeLeapLanded();
    void OnLS312TripleTowerLanded();
    void ExecuteUbergraph_BP_SkateScoreChallenge(int32 EntryPoint);
}; // Size: 0x700

#endif
