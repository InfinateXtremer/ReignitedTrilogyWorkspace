#ifndef UE4SS_SDK_Spyro_IGC_Success_HPP
#define UE4SS_SDK_Spyro_IGC_Success_HPP

class ASpyro_IGC_Success_C : public ASpyro_IGC_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class AActor* RewardActor;                                                        // 0x04E8 (size: 0x8)
    FPhasmidSoftReference Reward_SoftRef;                                             // 0x04F0 (size: 0x28)
    TArray<class AActor*> NotifyActors;                                               // 0x0518 (size: 0x10)
    int32 NotifyValue;                                                                // 0x0528 (size: 0x4)
    class AActor* RewardCamActor;                                                     // 0x0530 (size: 0x8)
    FSoftObjectPath ActorRefs;                                                        // 0x0538 (size: 0x18)
    FVector RewardLoc;                                                                // 0x0550 (size: 0xC)
    class AIGC_Selector_C* IGCSelectorRef;                                            // 0x0560 (size: 0x8)
    class AActor* FlightSuspendActor;                                                 // 0x0568 (size: 0x8)
    bool Flight_SuspendStart;                                                         // 0x0570 (size: 0x1)
    bool Flight_RestoreEnd;                                                           // 0x0571 (size: 0x1)
    class ASpyro2_PortalArch_C* PortalToOpen;                                         // 0x0578 (size: 0x8)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void All Dialogue Played();
    void InitReward();
    void RewardSequenceEnd();
    void PlayerReady();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void MoveReward();
    void ExecuteUbergraph_Spyro_IGC_Success(int32 EntryPoint);
}; // Size: 0x580

#endif
