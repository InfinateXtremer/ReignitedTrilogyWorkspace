#ifndef UE4SS_SDK_BP_CFS1166_Sheep_BOSS_HPP
#define UE4SS_SDK_BP_CFS1166_Sheep_BOSS_HPP

class ABP_CFS1166_Sheep_BOSS_C : public ABP_CFS1166_Sheep_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* State_FallingLand;                              // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* State_Falling;                                  // 0x0A90 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CFS1166_Sheep_BOSS(int32 EntryPoint);
}; // Size: 0xA98

#endif
