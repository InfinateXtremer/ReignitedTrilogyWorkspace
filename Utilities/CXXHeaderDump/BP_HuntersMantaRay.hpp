#ifndef UE4SS_SDK_BP_HuntersMantaRay_HPP
#define UE4SS_SDK_BP_HuntersMantaRay_HPP

class ABP_HuntersMantaRay_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CarMovement4;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CarMovement3;                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CarMovement2;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CarMovement1;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPath2;                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPath;                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A30 (size: 0x8)
    class UTextRenderComponent* NPCName;                                              // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A48 (size: 0x8)
    float Timeline_0_0_NewTrack_0_0087712C4810D5EEDC03E08034789C64;                   // 0x0A50 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_0087712C4810D5EEDC03E08034789C64; // 0x0A54 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0A58 (size: 0x8)
    float Timeline_1_NewTrack_0_4403C11B40DC93B622944AA49F283E21;                     // 0x0A60 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4403C11B40DC93B622944AA49F283E21; // 0x0A64 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A68 (size: 0x8)
    FVector originalLocation;                                                         // 0x0A70 (size: 0xC)
    class AActor* MyWaypoints1;                                                       // 0x0A80 (size: 0x8)
    FRotator Rotation;                                                                // 0x0A88 (size: 0xC)
    class AActor* MyWaypoints2;                                                       // 0x0A98 (size: 0x8)
    class USplineComponent* SplineRef;                                                // 0x0AA0 (size: 0x8)
    class USplineComponent* SplineRef2;                                               // 0x0AA8 (size: 0x8)
    class AActor* Target1;                                                            // 0x0AB0 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__FalconEnemyState_Idle2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FollowPath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void BndEvt__FalconEnemyState_FollowPath2_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void SetTriggerState(bool Disabled);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void PromptControl(bool On);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void ExecuteUbergraph_BP_HuntersMantaRay(int32 EntryPoint);
}; // Size: 0xAB8

#endif
