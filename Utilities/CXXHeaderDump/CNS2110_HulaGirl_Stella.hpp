#ifndef UE4SS_SDK_CNS2110_HulaGirl_Stella_HPP
#define UE4SS_SDK_CNS2110_HulaGirl_Stella_HPP

class ACNS2110_HulaGirl_Stella_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* Wrist_R;                                              // 0x0908 (size: 0x8)
    class UStaticMeshComponent* Wrist_L;                                              // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_TalkSuccess;                              // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_IdleSuccess;                              // 0x0920 (size: 0x8)
    bool Unchained;                                                                   // 0x0928 (size: 0x1)
    bool PlayMusic;                                                                   // 0x0929 (size: 0x1)
    TArray<class AActor*> MyChains;                                                   // 0x0930 (size: 0x10)
    class AActor* Selector;                                                           // 0x0940 (size: 0x8)

    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__State_Aware_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CNS2110_HulaGirl_Stella(int32 EntryPoint);
}; // Size: 0x948

#endif
