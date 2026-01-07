#ifndef UE4SS_SDK_BP_Base_Friendly_HPP
#define UE4SS_SDK_BP_Base_Friendly_HPP

class ABP_Base_Friendly_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0860 (size: 0x8)
    class UFalconEnemyStateComponent* State_Move;                                     // 0x0868 (size: 0x8)
    class UFalconEnemyStateComponent* State_Talk;                                     // 0x0870 (size: 0x8)
    class UFalconEnemyStateComponent* State_Aware;                                    // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* State_Idle;                                     // 0x0880 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0888 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x0890 (size: 0x8)
    FVector DeathDissolveTimeline_BPFriendly_FadeToBlack_7DBFD626470A471332EEE6882BAEC722; // 0x0898 (size: 0xC)
    float DeathDissolveTimeline_BPFriendly_Fringe_Intensity_7DBFD626470A471332EEE6882BAEC722; // 0x08A4 (size: 0x4)
    float DeathDissolveTimeline_BPFriendly_Fringe_Size_7DBFD626470A471332EEE6882BAEC722; // 0x08A8 (size: 0x4)
    float DeathDissolveTimeline_BPFriendly_Dissolve_Amount_7DBFD626470A471332EEE6882BAEC722; // 0x08AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DeathDissolveTimeline_BPFriendly__Direction_7DBFD626470A471332EEE6882BAEC722; // 0x08B0 (size: 0x1)
    class UTimelineComponent* DeathDissolveTimeline_BPFriendly;                       // 0x08B8 (size: 0x8)
    float Timeline_1_Dissolve_Amount_4DF99359456F568BE42909A07B7D7074;                // 0x08C0 (size: 0x4)
    float Timeline_1_Diffuse_Brightness_4DF99359456F568BE42909A07B7D7074;             // 0x08C4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4DF99359456F568BE42909A07B7D7074; // 0x08C8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x08D0 (size: 0x8)
    FText NPCName;                                                                    // 0x08D8 (size: 0x18)
    class UAnimSequence* LocalLipSync;                                                // 0x08F0 (size: 0x8)
    class UAnimMontage* PlayingLipSync;                                               // 0x08F8 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    void UserConstructionScript();
    void DeathDissolveTimeline_BPFriendly__FinishedFunc();
    void DeathDissolveTimeline_BPFriendly__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void PromptControl(bool On);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void spawnedInventoryItemCollected(int32 ID);
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__State_Talk_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Talk_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void Death Dissolve();
    void BndEvt__FalconEnemy_K2Node_ComponentBoundEvent_0_OnStateChangeSignature__DelegateSignature();
    void Dissolve Equipment();
    void Undissolve();
    void Deactivate Effects();
    void ExecuteUbergraph_BP_Base_Friendly(int32 EntryPoint);
}; // Size: 0x900

#endif
