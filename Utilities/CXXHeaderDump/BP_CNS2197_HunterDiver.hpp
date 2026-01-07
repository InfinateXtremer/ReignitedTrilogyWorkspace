#ifndef UE4SS_SDK_BP_CNS2197_HunterDiver_HPP
#define UE4SS_SDK_BP_CNS2197_HunterDiver_HPP

class ABP_CNS2197_HunterDiver_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    bool alerted;                                                                     // 0x0908 (size: 0x1)
    class ABP_CES1009_Goon_C* TalkPartner;                                            // 0x0910 (size: 0x8)
    FText TextName;                                                                   // 0x0918 (size: 0x18)
    FText TextPrompt;                                                                 // 0x0930 (size: 0x18)
    float MissionStartDelay;                                                          // 0x0948 (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CNS2197_HunterDiver(int32 EntryPoint);
}; // Size: 0x94C

#endif
