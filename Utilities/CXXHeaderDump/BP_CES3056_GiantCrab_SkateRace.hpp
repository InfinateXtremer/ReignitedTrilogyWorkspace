#ifndef UE4SS_SDK_BP_CES3056_GiantCrab_SkateRace_HPP
#define UE4SS_SDK_BP_CES3056_GiantCrab_SkateRace_HPP

class ABP_CES3056_GiantCrab_SkateRace_C : public ABP_CES3056_GiantCrab_Blue_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B68 (size: 0x8)
    int32 TurboPointsRewardVal;                                                       // 0x0B70 (size: 0x4)
    FBP_CES3056_GiantCrab_SkateRace_COnRacewayCrabKilled OnRacewayCrabKilled;         // 0x0B78 (size: 0x10)

    void UserConstructionScript();
    void OnRevive();
    void ReceiveBeginPlay();
    void HasBeenKilled();
    void ExecuteUbergraph_BP_CES3056_GiantCrab_SkateRace(int32 EntryPoint);
    void OnRacewayCrabKilled__DelegateSignature();
}; // Size: 0xB88

#endif
