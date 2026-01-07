#ifndef UE4SS_SDK_Spyro_IGC_MoneybagsReward_HPP
#define UE4SS_SDK_Spyro_IGC_MoneybagsReward_HPP

class ASpyro_IGC_MoneybagsReward_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    int32 TreasureAmount;                                                             // 0x04E8 (size: 0x4)
    class AActor* RewardActor;                                                        // 0x04F0 (size: 0x8)
    EInventoryType RewardInventoryItem;                                               // 0x04F8 (size: 0x1)
    TArray<class AActor*> NotifyActors;                                               // 0x0500 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0510 (size: 0x4)
    float TheatricsDelay;                                                             // 0x0514 (size: 0x4)
    class AActor* GoalNotMetActor;                                                    // 0x0518 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void ExecuteUbergraph_Spyro_IGC_MoneybagsReward(int32 EntryPoint);
}; // Size: 0x520

#endif
