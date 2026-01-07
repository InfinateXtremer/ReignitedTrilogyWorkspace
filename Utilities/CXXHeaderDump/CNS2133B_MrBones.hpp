#ifndef UE4SS_SDK_CNS2133B_MrBones_HPP
#define UE4SS_SDK_CNS2133B_MrBones_HPP

class ACNS2133B_MrBones_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dance5_SplitsB;                           // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_StartBroken;                              // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Finished;                                 // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Bow;                                      // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_FallDown;                                 // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dance4_BackFlip;                          // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dance3_Splits;                            // 0x0938 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dance2_Disco;                             // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dance1_ArmSway;                           // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* State_Reform;                                   // 0x0950 (size: 0x8)
    bool alerted;                                                                     // 0x0958 (size: 0x1)
    class ABP_CES1009_Goon_C* TalkPartner;                                            // 0x0960 (size: 0x8)
    FText TextName;                                                                   // 0x0968 (size: 0x18)
    FText TextPrompt;                                                                 // 0x0980 (size: 0x18)
    float MissionStartDelay;                                                          // 0x0998 (size: 0x4)

    void UserConstructionScript();
    void OnNotifyEnd_279049894BCAD3DA840818A246C9EBBA(FName NotifyName);
    void OnNotifyBegin_279049894BCAD3DA840818A246C9EBBA(FName NotifyName);
    void OnInterrupted_279049894BCAD3DA840818A246C9EBBA(FName NotifyName);
    void OnBlendOut_279049894BCAD3DA840818A246C9EBBA(FName NotifyName);
    void OnCompleted_279049894BCAD3DA840818A246C9EBBA(FName NotifyName);
    void OnNotifyEnd_59DEF9D64646644AF0E23ABE3BD61A50(FName NotifyName);
    void OnNotifyBegin_59DEF9D64646644AF0E23ABE3BD61A50(FName NotifyName);
    void OnInterrupted_59DEF9D64646644AF0E23ABE3BD61A50(FName NotifyName);
    void OnBlendOut_59DEF9D64646644AF0E23ABE3BD61A50(FName NotifyName);
    void OnCompleted_59DEF9D64646644AF0E23ABE3BD61A50(FName NotifyName);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_StartBroken_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Reform_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Finished_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Music Ducking();
    void ExecuteUbergraph_CNS2133B_MrBones(int32 EntryPoint);
}; // Size: 0x99C

#endif
