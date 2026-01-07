#ifndef UE4SS_SDK_SelectorRewardUI_HPP
#define UE4SS_SDK_SelectorRewardUI_HPP

class ASelectorRewardUI_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class AIGC_Selector_C* Selector;                                                  // 0x0338 (size: 0x8)
    FString RewardString;                                                             // 0x0340 (size: 0x10)
    bool done;                                                                        // 0x0350 (size: 0x1)
    int32 State;                                                                      // 0x0354 (size: 0x4)
    FString PromptString;                                                             // 0x0358 (size: 0x10)
    FString CurrentString;                                                            // 0x0368 (size: 0x10)
    TArray<class ABP_S2_Orb_Rewarded_C*> orbs;                                        // 0x0378 (size: 0x10)
    TArray<FPhasmidSoftReference> Orbs_SoftRefs;                                      // 0x0388 (size: 0x10)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void InitRewards();
    void PlayerReady();
    void BoxEntry(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_SelectorRewardUI(int32 EntryPoint);
}; // Size: 0x398

#endif
